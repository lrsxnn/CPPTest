#include "ReceiveProto.h"

using namespace CPPClient::Net::Cmd;

void ReceiveProto::Receive(const char *buffer)
{
    lspb::SrvRes res;
    res.ParseFromString(buffer);
    switch (res.methodid())
    {
    case lspb::SrvMsgType::srvEnterRoom:
        SrvEnterRoom(res.srventerroom(), res.result(), res.errstr());
        break;
    case lspb::SrvMsgType::srvInitOver:
        SrvInitOver(res.srvinitover(), res.result(), res.errstr());
        break;
    case lspb::SrvMsgType::bGameInit:
        BGameInit(res.bgameinit(), res.result(), res.errstr());
        break;
    case lspb::SrvMsgType::bGameStart:
        BGameStart(res.bgamestart(), res.result(), res.errstr());
        break;
    case lspb::SrvMsgType::bGameFrame:
        BGameFrame(res.bgameframe(), res.result(), res.errstr());
        break;
    default:
        printf("proto error no %d\n", res.methodid());
        break;
    }
}

void ReceiveProto::SrvEnterRoom(lspb::SrvEnterRoom msg, lspb::Result result, string errStr)
{
    printf("-----------------------no implements SrvEnterRoom-----------------------\n");
}

void ReceiveProto::SrvInitOver(lspb::SrvInitOver msg, lspb::Result result, string errStr)
{
    printf("-----------------------no implements SrvInitOver-----------------------\n");
}

void ReceiveProto::BGameInit(lspb::BGameInit msg, lspb::Result result, string errStr)
{
    printf("-----------------------no implements BGameInit-----------------------\n");
}

void ReceiveProto::BGameStart(lspb::BGameStart msg, lspb::Result result, string errStr)
{
    printf("-----------------------no implements BGameStart-----------------------\n");
}

void ReceiveProto::BGameFrame(lspb::BGameFrame msg, lspb::Result result, string errStr)
{
    printf("-----------------------no implements BGameFrame-----------------------\n");
}