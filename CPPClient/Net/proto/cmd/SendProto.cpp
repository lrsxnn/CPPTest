#include "SendProto.h"

using namespace CPPClient::Net::Cmd;

lspb::CliReq *SendProto::CreateCliReq(lspb::ClientMsgType methodId, int userId, lspb::ModuleId moduleId)
{
    lspb::CliReq *req = new lspb::CliReq;
    req->set_methodid(methodId);
    req->set_userid(userId);
    req->set_moduleid(moduleId);
    return req;
}

void SendProto::CliEnterRoom(int roomId, string name, int userId, lspb::ModuleId moduleId)
{
    lspb::CliEnterRoom *cliEnterRoom = new lspb::CliEnterRoom;
    cliEnterRoom->set_roomid(roomId);
    cliEnterRoom->set_name(name);

    string *output = new string;

    lspb::CliReq *req = CreateCliReq(lspb::ClientMsgType::cliEnterRoom, userId, moduleId);
    req->set_allocated_clienterroom(cliEnterRoom);
    req->SerializeToString(output);

    int err = UdpSocket::send(output->c_str(), 8);
    if (err < 0)
    {
        printf("client send error %d\n", err);
    }
    else
    {
        delete req;
        req = nullptr;
        delete output;
        output = nullptr;
    }
}

void SendProto::CliOperate(string direction, bool isFire, int userId, lspb::ModuleId moduleId)
{
    lspb::CliOperate *cliOperate = new lspb::CliOperate;
    cliOperate->set_direction(direction);
    cliOperate->set_isfire(isFire);

    string *output = new string;

    lspb::CliReq *req = CreateCliReq(lspb::ClientMsgType::cliOperate, userId, moduleId);
    req->set_allocated_clioperate(cliOperate);
    req->SerializeToString(output);

    int err = UdpSocket::send(output->c_str(), 8);
    if (err < 0)
    {
        printf("client send error %d\n", err);
    }
    else
    {
        delete req;
        req = nullptr;
        delete output;
        output = nullptr;
    }
}

void SendProto::CliInitOver(int userId, lspb::ModuleId moduleId)
{
    lspb::CliInitOver *cliInitOver = new lspb::CliInitOver;

    string *output = new string;

    lspb::CliReq *req = CreateCliReq(lspb::ClientMsgType::cliInitOver, userId, moduleId);
    req->set_allocated_cliinitover(cliInitOver);
    req->SerializeToString(output);

    int err = UdpSocket::send(output->c_str(), 8);
    if (err < 0)
    {
        printf("client send error %d\n", err);
    }
    else
    {
        delete req;
        req = nullptr;
        delete output;
        output = nullptr;
    }
}