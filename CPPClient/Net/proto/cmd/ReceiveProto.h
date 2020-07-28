#pragma once
#ifndef _RECEIVEPROTO_H
#define _RECEIVEPROTO_H

#include "../pb/srvRes.pb.h"

using namespace std;

namespace CPPClient
{
    namespace Net
    {
        namespace Cmd
        {
            class ReceiveProto
            {
            public:
                void Receive(const char *buffer);

            protected:
                virtual void SrvEnterRoom(lspb::SrvEnterRoom msg, lspb::Result result, string errStr);
                virtual void SrvInitOver(lspb::SrvInitOver msg, lspb::Result result, string errStr);
                virtual void BGameInit(lspb::BGameInit msg, lspb::Result result, string errStr);
                virtual void BGameStart(lspb::BGameStart msg, lspb::Result result, string errStr);
                virtual void BGameFrame(lspb::BGameFrame msg, lspb::Result result, string errStr);
            };
        } // namespace Cmd
    }     // namespace Net
} // namespace CPPClient

#endif