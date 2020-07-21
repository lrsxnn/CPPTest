#include <iostream>
#include "Net/UdpSocket.h"
using namespace CPPServer::Net;

int main(int argc, const char *argv[])
{
    UdpSocket *socket = new UdpSocket;
    socket->connect();
    return 0;
}