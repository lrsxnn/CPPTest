#pragma once
#ifndef _RECEIVE_PROTO_FUNC_H
#define _RECEIVE_PROTO_FUNC_H

#include "../pb/srvRes.pb.h"
#include "../cmd/ReceiveProto.h"

using namespace std;

namespace CPPClient
{
    namespace Net
    {
        namespace Func
        {
            class ReceiveProto : public CPPClient::Net::Cmd::ReceiveProto
            {
            protected:
                void SrvEnterRoom(lspb::SrvEnterRoom msg, lspb::Result result, string errStr);
                void SrvInitOver(lspb::SrvInitOver msg, lspb::Result result, string errStr);
                void BGameInit(lspb::BGameInit msg, lspb::Result result, string errStr);
                void BGameStart(lspb::BGameStart msg, lspb::Result result, string errStr);
                void BGameFrame(lspb::BGameFrame msg, lspb::Result result, string errStr);
            };
        } // namespace Func
    }     // namespace Net
} // namespace CPPClient

#endif