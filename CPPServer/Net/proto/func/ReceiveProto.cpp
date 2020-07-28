#include "ReceiveProto.h"
#include "Net/proto/cmd/SendProto.h"

using namespace CPPServer::Net::Func;

void ReceiveProto::CliEnterRoom(lspb::CliEnterRoom msg)
{
    printf("CliEnterRoom\n");
    Cmd::SendProto::SrvEnterRoom(10);
}

void ReceiveProto::CliOperate(lspb::CliOperate msg)
{
    printf("CliOperate\n");
}

void ReceiveProto::CliInitOver(lspb::CliInitOver msg)
{
    printf("CliInitOver\n");
}