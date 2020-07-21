#pragma once
#ifndef _CPPTEST_UTILS_H
#define _CPPTEST_UTILS_H

#include "KCP/ikcp.h"
#include <sys/time.h>

namespace CPPClient
{
    class Utils
    {
    private:
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

    public:
        static inline IUINT32 iclock()
        {
            return (IUINT32)(iclock64() & 0xfffffffful);
        }
    };
} // namespace CPPClient

#endif