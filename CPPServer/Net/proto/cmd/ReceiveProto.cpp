#include "ReceiveProto.h"

using namespace CPPServer::Net::Cmd;

void ReceiveProto::Receive(const char *buffer)
{
    lspb::CliReq req;
    req.ParseFromString(buffer);
    switch (req.methodid())
    {
    case lspb::ClientMsgType::cliEnterRoom:
        CliEnterRoom(req.clienterroom());
        break;
    case lspb::ClientMsgType::cliOperate:
        CliOperate(req.clioperate());
        break;
    case lspb::ClientMsgType::cliInitOver:
        CliInitOver(req.cliinitover());
        break;
    default:
        printf("proto error no %d\n", req.methodid());
        break;
    }
}

void ReceiveProto::CliEnterRoom(lspb::CliEnterRoom msg)
{
    printf("-----------------------no implements CliEnterRoom-----------------------\n");
}

void ReceiveProto::CliOperate(lspb::CliOperate msg)
{
    printf("-----------------------no implements CliOperate-----------------------\n");
}

void ReceiveProto::CliInitOver(lspb::CliInitOver msg)
{
    printf("-----------------------no implements CliInitOver-----------------------\n");
}