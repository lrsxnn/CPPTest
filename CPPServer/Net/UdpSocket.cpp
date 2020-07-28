#include "UdpSocket.h"
using namespace CPPServer;
using namespace CPPServer::Net;

#define SOCKET_ERROR -1

UDPSERVER UdpSocket::sock = socket(AF_INET, SOCK_DGRAM, 0);
sockaddr UdpSocket::clientAddr = {};
socklen_t UdpSocket::nAddrLen = sizeof(sockaddr);
ikcpcb *UdpSocket::kcp;
CPPServer::Net::Func::ReceiveProto *UdpSocket::proto = new CPPServer::Net::Func::ReceiveProto;

void UdpSocket::connect()
{
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64)
    WSADATA wsaData;
    WSAStartup(MAKEWORD(2, 2), &wsaData);
#endif
    if (sock == SOCKET_ERROR)
    {
        perror("socket error!\n");
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

    sockaddr_in sin;
    memset(&sin, 0, sizeof(sin));
    sin.sin_family = AF_INET;
    sin.sin_port = htons(4567);
    sin.sin_addr.s_addr = INADDR_ANY;
    if (::bind(sock, (sockaddr *)&sin, sizeof(sin)) == SOCKET_ERROR)
    {
        perror("bind error!\n");
        return;
    }

    kcp = ikcp_create(10, (void *)0);
    kcp->output = udp_output;

    ikcp_wndsize(kcp, 128, 128);
    ikcp_nodelay(kcp, 0, 10, 0, 0);

    char receiveBuffer[1024];
    int receiveBufferSize = sizeof(receiveBuffer);
    long receiveDataLength;

    while (true)
    {
        isleep(1);
        ikcp_update(kcp, iclock());

        while (true)
        {
            receiveDataLength = recvfrom(sock, receiveBuffer, receiveBufferSize, 0, &clientAddr, &nAddrLen);
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

    ikcp_release(kcp);
    close(sock);
}

int UdpSocket::udp_output(const char *buf, int len, ikcpcb *kcp, void *user)
{
    printf("client send = %s\n", buf);
    sendto(sock, buf, len, 0, (struct sockaddr *)&clientAddr, nAddrLen);
    return 0;
}

int UdpSocket::send(const char *buffer, int len)
{
    return ikcp_send(kcp, buffer, len);
}