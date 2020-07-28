#pragma once
#ifndef _UDPSOCKET_H
#define _UDPSOCKET_H

#include <stdio.h>
#include <string>
#include <netinet/in.h>
#include <regex>
#include "KCP/ikcp.h"
#include <fcntl.h>
#include <thread>
#include <functional>
#include "proto/func/ReceiveProto.h"

#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64)
#include <winsock2.h>
#pragma comment(lib, "ws2_32.lib") //加载 ws2_32.dll

#ifndef UDPCLIENT
#define UDPCLIENT SOCKET
#endif

#else
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <unistd.h>
#ifndef UDPCLIENT
#define UDPCLIENT int
#endif

#endif

namespace CPPClient
{
    namespace Net
    {
        class UdpSocket
        {
        private:
            static UDPCLIENT sock;
            static sockaddr_in sin;
            static ikcpcb *kcp;
            static CPPClient::Net::Func::ReceiveProto *proto;

            static void connectByIP(const char *ip, int port);
            static void connectByHost(const char *host, int port);
            static void connect();
            static void receive();
            static int udp_output(const char *buf, int len, ikcpcb *kcp, void *user);

        public:
            static void connectServer(const char *address, int port);
            static int send(const char *buffer, int len);
            static void closeUdpSocket();
        };
    } // namespace Net
} // namespace CPPClient

#endif