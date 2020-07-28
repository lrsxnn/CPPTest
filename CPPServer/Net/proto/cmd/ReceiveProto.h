#pragma once
#ifndef _RECEIVEPROTO_H
#define _RECEIVEPROTO_H

#include "../pb/cliReq.pb.h"

using namespace std;

namespace CPPServer
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
                virtual void CliEnterRoom(lspb::CliEnterRoom msg);
                virtual void CliOperate(lspb::CliOperate msg);
                virtual void CliInitOver(lspb::CliInitOver msg);
            };
        } // namespace Cmd
    }     // namespace Net
} // namespace CPPServer

#endif