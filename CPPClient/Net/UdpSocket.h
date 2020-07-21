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
            ikcpcb *kcp;

            void connectByIP(const char *ip, int port);
            void connectByHost(const char *host, int port);
            void connect();
            static void receive(ikcpcb *kcp);
            static int udp_output(const char *buf, int len, ikcpcb *kcp, void *user);

        public:
            void connectServer(const char *address, int port);
            void send(const char *buffer, int len);
            void closeUdpSocket();
        };
    } // namespace Net
} // namespace CPPClient

#endif