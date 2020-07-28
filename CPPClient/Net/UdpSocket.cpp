#include "UdpSocket.h"
#include "Utils.h"

using namespace std;
using namespace CPPClient;
using namespace CPPClient::Net;

#define SOCKET_ERROR -1

UDPCLIENT UdpSocket::sock = socket(AF_INET, SOCK_DGRAM, 0);
sockaddr_in UdpSocket::sin;
ikcpcb *UdpSocket::kcp;
CPPClient::Net::Func::ReceiveProto *UdpSocket::proto = new CPPClient::Net::Func::ReceiveProto;

void UdpSocket::connectByIP(const char *ip, int port)
{
    memset(&sin, 0, sizeof(sin));
    sin.sin_family = AF_INET;
    sin.sin_port = htons(port);
    sin.sin_addr.s_addr = inet_addr(ip);
    connect();
}

void UdpSocket::connectByHost(const char *host, int port)
{
    memset(&sin, 0, sizeof(sin));
    sin.sin_family = AF_INET;
    sin.sin_port = htons(port);
    struct hostent *host_ent = gethostbyname(host);
    sin.sin_addr.s_addr = inet_addr(host_ent->h_addr_list[0]);
    connect();
}

void UdpSocket::connect()
{
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64)
    WSADATA wsaData;
    WSAStartup(MAKEWORD(2, 2), &wsaData);
#endif
    if (sock == SOCKET_ERROR)
    {
        printf("socket build error!\n");
        return;
    }
    else
    {
        printf("socket build success!\n");
    }

    //设置非阻塞
    int flag = fcntl(sock, F_GETFL, 0);
    if (flag < 0)
    {
        printf("fcntl F_GETFL fail!\n");
        return;
    }
    if (fcntl(sock, F_SETFL, flag | O_NONBLOCK) < 0)
    {
        printf("fcntl F_SETFL fail!\n");
    }

    kcp = ikcp_create(10, (void *)0);
    kcp->output = udp_output;

    ikcp_wndsize(kcp, 128, 128);
    ikcp_nodelay(kcp, 0, 10, 0, 0);

    thread t(receive);
    t.detach();
}

void UdpSocket::receive()
{
    char receiveBuffer[1024];
    int receiveBufferSize = sizeof(receiveBuffer);
    long receiveDataLength;
    sockaddr serverAddr;
    socklen_t nAddrLen;

    int optval;
    socklen_t optlen = sizeof(int);

    while (true)
    {
        if (getsockopt(sock, SOL_SOCKET, SO_TYPE, &optval, &optlen) == -1)
        {
            break;
        }
        this_thread::sleep_for(chrono::milliseconds(1));
        ikcp_update(kcp, Utils::iclock());

        while (true)
        {
            receiveDataLength = recvfrom(sock, receiveBuffer, receiveBufferSize, 0, &serverAddr, &nAddrLen);
            if (receiveDataLength < 0)
            {
                break;
            }
            ikcp_input(kcp, receiveBuffer, receiveDataLength);
        }

        while (true)
        {
            receiveDataLength = ikcp_recv(kcp, receiveBuffer, 10);
            if (receiveDataLength < 0)
            {
                break;
            }
            printf("message = %s\n", receiveBuffer);
            //todo receive
            proto->Receive(receiveBuffer);
        }
    }
    printf("Thread over\n");
}

int UdpSocket::udp_output(const char *buf, int len, ikcpcb *kcp, void *user)
{
    printf("client send = %s\n", buf);
    sendto(sock, buf, len, 0, (struct sockaddr *)&sin, sizeof(sin));
    return 0;
}

void UdpSocket::connectServer(const char *address, int port)
{
    regex r("^((2(5[0-5]|[0-4]\\d))|[0-1]?\\d{1,2})(\\.((2(5[0-5]|[0-4]\\d))|[0-1]?\\d{1,2})){3}$");
    bool flag = regex_match(address, r);
    if (flag)
    {
        connectByIP(address, port);
    }
    else
    {
        connectByHost(address, port);
    }
}

int UdpSocket::send(const char *buffer, int len)
{
    return ikcp_send(kcp, buffer, len);
}

void UdpSocket::closeUdpSocket()
{
    ikcp_release(kcp);
    close(sock);
}