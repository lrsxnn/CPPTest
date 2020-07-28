#include "Net/UdpSocket.h"

#include "Net/proto/cmd/SendProto.h"
#include "Net/proto/pb/cliReq.pb.h"

#include <thread>
#include <iostream>
using namespace std;
using namespace CPPClient::Net;
using namespace CPPClient::Net::Cmd;

int main(int argc, const char *argv[])
{
    UdpSocket::connectServer("127.0.0.1", 4567);
    SendProto::CliEnterRoom(10, "test");
    int x;
    cin >> x;
    if (x == 0)
    {
        UdpSocket::closeUdpSocket();
    }
    this_thread::sleep_for(chrono::milliseconds(1000));
    return 0;
}