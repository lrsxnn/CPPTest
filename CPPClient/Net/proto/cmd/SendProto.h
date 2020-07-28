#pragma once
#ifndef _SENDPROTO_H
#define _SENDPROTO_H

#include "../pb/cliReq.pb.h"
#include "Net/UdpSocket.h"

using namespace std;

namespace CPPClient
{
    namespace Net
    {
        namespace Cmd
        {
            class SendProto
            {
            private:
                static lspb::CliReq *CreateCliReq(lspb::ClientMsgType methodId, int userId = 1, lspb::ModuleId moduleId = lspb::ModuleId::Game);

            public:
                static void CliEnterRoom(int roomId = 0, string name = "", int userId = 1, lspb::ModuleId moduleId = lspb::ModuleId::Game);
                static void CliOperate(string direction = "", bool isFire = false, int userId = 1, lspb::ModuleId moduleId = lspb::ModuleId::Game);
                static void CliInitOver(int userId = 1, lspb::ModuleId moduleId = lspb::ModuleId::Game);
            };
        } // namespace Cmd
    }     // namespace Net
} // namespace CPPClient

#endif