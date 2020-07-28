#pragma once
#ifndef _RECEIVE_PROTO_FUNC_H
#define _RECEIVE_PROTO_FUNC_H

#include "../pb/cliReq.pb.h"
#include "../cmd/ReceiveProto.h"

using namespace std;

namespace CPPServer
{
    namespace Net
    {
        namespace Func
        {
            class ReceiveProto : public CPPServer::Net::Cmd::ReceiveProto
            {
            protected:
                void CliEnterRoom(lspb::CliEnterRoom msg);
                void CliOperate(lspb::CliOperate msg);
                void CliInitOver(lspb::CliInitOver msg);
            };
        } // namespace Func
    }     // namespace Net
} // namespace CPPServer

#endif