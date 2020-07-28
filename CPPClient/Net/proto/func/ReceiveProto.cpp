#include "ReceiveProto.h"

using namespace CPPClient::Net::Func;

void ReceiveProto::SrvEnterRoom(lspb::SrvEnterRoom msg, lspb::Result result, string errStr)
{
    printf("SrvEnterRoom\n");
}

void ReceiveProto::SrvInitOver(lspb::SrvInitOver msg, lspb::Result result, string errStr)
{
    printf("SrvEnterRoom\n");
}

void ReceiveProto::BGameInit(lspb::BGameInit msg, lspb::Result result, string errStr)
{
    printf("SrvEnterRoom\n");
}

void ReceiveProto::BGameStart(lspb::BGameStart msg, lspb::Result result, string errStr)
{
    printf("SrvEnterRoom\n");
}

void ReceiveProto::BGameFrame(lspb::BGameFrame msg, lspb::Result result, string errStr)
{
    printf("SrvEnterRoom\n");
}