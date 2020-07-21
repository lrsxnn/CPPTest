#include "Net/UdpSocket.h"
#include <thread>
#include <iostream>
using namespace std;
using namespace CPPClient::Net;

int main(int argc, const char *argv[])
{
    UdpSocket *socket = new UdpSocket;
    socket->connectServer("127.0.0.1", 4567);
    socket->send("hello\n", 8);
    int x;
    cin >> x;
    if (x == 0)
    {
        socket->closeUdpSocket();
    }
    this_thread::sleep_for(chrono::milliseconds(1000));
    return 0;
}