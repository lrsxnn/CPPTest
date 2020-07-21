#pragma once
#ifndef _UDPSOCKET_H
#define _UDPSOCKET_H

#include <stdio.h>
#include <string>
#include <netinet/in.h>
#include <regex>
#include "KCP/ikcp.h"
#include <fcntl.h>

#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64)
#include <winsock2.h>
#pragma comment(lib, "ws2_32.lib") //加载 ws2_32.dll

#ifndef UDPSERVER
#define UDPSERVER SOCKET
#endif

#else
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <sys/time.h>
#include <unistd.h>

#ifndef UDPSERVER
#define UDPSERVER int
#endif

#endif

// using namespace std;

namespace CPPServer
{
    namespace Net
    {
        class UdpSocket
        {
        private:
            static UDPSERVER sock;
            ikcpcb *kcp;

            static sockaddr clientAddr;
            static socklen_t nAddrLen;

            static int udp_output(const char *buf, int len, ikcpcb *kcp, void *user);

            /* get system time */
            static inline void itimeofday(long *sec, long *usec)
            {
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64)
                static long mode = 0, addsec = 0;
                BOOL retval;
                static IINT64 freq = 1;
                IINT64 qpc;
                if (mode == 0)
                {
                    retval = QueryPerformanceFrequency((LARGE_INTEGER *)&freq);
                    freq = (freq == 0) ? 1 : freq;
                    retval = QueryPerformanceCounter((LARGE_INTEGER *)&qpc);
                    addsec = (long)time(NULL);
                    addsec = addsec - (long)((qpc / freq) & 0x7fffffff);
                    mode = 1;
                }
                retval = QueryPerformanceCounter((LARGE_INTEGER *)&qpc);
                retval = retval * 2;
                if (sec)
                    *sec = (long)(qpc / freq) + addsec;
                if (usec)
                    *usec = (long)((qpc % freq) * 1000000 / freq);
#else
                struct timeval time;
                gettimeofday(&time, NULL);
                if (sec)
                    *sec = time.tv_sec;
                if (usec)
                    *usec = time.tv_usec;
#endif
            }

            /* get clock in millisecond 64 */
            static inline IINT64 iclock64(void)
            {
                long s, u;
                IINT64 value;
                itimeofday(&s, &u);
                value = ((IINT64)s) * 1000 + (u / 1000);
                return value;
            }

            static inline IUINT32 iclock()
            {
                return (IUINT32)(iclock64() & 0xfffffffful);
            }

            /* sleep in millisecond */
            static inline void isleep(unsigned long millisecond)
            {
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) /* usleep( time * 1000 ); */
                Sleep(millisecond);
#else
                struct timespec ts;
                ts.tv_sec = (time_t)(millisecond / 1000);
                ts.tv_nsec = (long)((millisecond % 1000) * 1000000);
                /*nanosleep(&ts, NULL);*/
                usleep((millisecond << 10) - (millisecond << 4) - (millisecond << 3));
#endif
            }

        public:
            void connect();
            void send(const char *buffer, int len);
        };
    } // namespace Net
} // namespace CPPServer

#endif