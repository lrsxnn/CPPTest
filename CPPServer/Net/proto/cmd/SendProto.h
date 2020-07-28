#pragma once
#ifndef _SENDPROTO_H
#define _SENDPROTO_H

#include "../pb/srvRes.pb.h"
#include "Net/UdpSocket.h"

using namespace std;

namespace CPPServer
{
    namespace Net
    {
        namespace Cmd
        {
            class SendProto
            {
            private:
                static lspb::SrvRes *CreateSrvRes(lspb::SrvMsgType methodId, lspb::Result result = lspb::Result::success, string errStr = "");

            public:
                static void SrvEnterRoom(int playerId = 0, lspb::Result result = lspb::Result::success, string errStr = "");
                static void SrvInitOver(lspb::Result result = lspb::Result::success, string errStr = "");
                static void BGameInit(int seed = 0, const vector<lspb::PlayerInfo> &pList = vector<lspb::PlayerInfo>(), lspb::Result result = lspb::Result::success, string errStr = "");
                static void BGameStart(lspb::Result result = lspb::Result::success, string errStr = "");
                static void BGameFrame(int fId = 0, const vector<lspb::CliOperate> &operList = vector<lspb::CliOperate>(), lspb::Result result = lspb::Result::success, string errStr = "");
            };
        } // namespace Cmd
    }     // namespace Net
} // namespace CPPServer

#endif