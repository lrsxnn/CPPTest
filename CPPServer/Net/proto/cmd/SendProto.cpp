#include "SendProto.h"

using namespace CPPServer::Net::Cmd;

lspb::SrvRes *SendProto::CreateSrvRes(lspb::SrvMsgType methodId, lspb::Result result, string errStr)
{
    lspb::SrvRes *res = new lspb::SrvRes;
    res->set_methodid(methodId);
    res->set_result(result);
    res->set_errstr(errStr);
    return res;
}

void SendProto::SrvEnterRoom(int playerId, lspb::Result result, string errStr)
{
    lspb::SrvEnterRoom *srvEnterRoom = new lspb::SrvEnterRoom;
    srvEnterRoom->set_playerid(playerId);

    string *output = new string;

    lspb::SrvRes *res = CreateSrvRes(lspb::SrvMsgType::srvEnterRoom, result, errStr);
    res->set_allocated_srventerroom(srvEnterRoom);
    res->SerializeToString(output);

    int err = UdpSocket::send(output->c_str(), 8);
    if (err < 0)
    {
        printf("server send error %d\n", err);
    }
    else
    {
        delete res;
        res = nullptr;
        delete output;
        output = nullptr;
    }
}

void SendProto::SrvInitOver(lspb::Result result, string errStr)
{
    lspb::SrvInitOver *srvInitOver = new lspb::SrvInitOver;

    string *output = new string;

    lspb::SrvRes *res = CreateSrvRes(lspb::SrvMsgType::srvInitOver, result, errStr);
    res->set_allocated_srvinitover(srvInitOver);
    res->SerializeToString(output);

    int err = UdpSocket::send(output->c_str(), 8);
    if (err < 0)
    {
        printf("server send error %d\n", err);
    }
    else
    {
        delete res;
        res = nullptr;
        delete output;
        output = nullptr;
    }
}

void SendProto::BGameInit(int seed, const vector<lspb::PlayerInfo> &pList, lspb::Result result, string errStr)
{
    lspb::BGameInit *bGameInit = new lspb::BGameInit;
    bGameInit->set_seed(seed);
    for (auto i = pList.begin(); i < pList.end(); i++)
    {
        lspb::PlayerInfo *data = bGameInit->add_plist();
        data->CopyFrom(*i);
    }

    string *output = new string;

    lspb::SrvRes *res = CreateSrvRes(lspb::SrvMsgType::bGameInit, result, errStr);
    res->set_allocated_bgameinit(bGameInit);
    res->SerializeToString(output);

    int err = UdpSocket::send(output->c_str(), 8);
    if (err < 0)
    {
        printf("server send error %d\n", err);
    }
    else
    {
        delete res;
        res = nullptr;
        delete output;
        output = nullptr;
    }
}

void SendProto::BGameStart(lspb::Result result, string errStr)
{
    lspb::BGameStart *bGameStart = new lspb::BGameStart;

    string *output = new string;

    lspb::SrvRes *res = CreateSrvRes(lspb::SrvMsgType::bGameStart, result, errStr);
    res->set_allocated_bgamestart(bGameStart);
    res->SerializeToString(output);

    int err = UdpSocket::send(output->c_str(), 8);
    if (err < 0)
    {
        printf("server send error %d\n", err);
    }
    else
    {
        delete res;
        res = nullptr;
        delete output;
        output = nullptr;
    }
}

void SendProto::BGameFrame(int fId, const vector<lspb::CliOperate> &operList, lspb::Result result, string errStr)
{
    lspb::BGameFrame *bGameFrame = new lspb::BGameFrame;
    bGameFrame->set_fid(fId);
    for (auto i = operList.begin(); i < operList.end(); i++)
    {
        lspb::CliOperate *data = bGameFrame->add_operlist();
        data->CopyFrom(*i);
    }

    string *output = new string;

    lspb::SrvRes *res = CreateSrvRes(lspb::SrvMsgType::bGameFrame, result, errStr);
    res->set_allocated_bgameframe(bGameFrame);
    res->SerializeToString(output);

    int err = UdpSocket::send(output->c_str(), 8);
    if (err < 0)
    {
        printf("server send error %d\n", err);
    }
    else
    {
        delete res;
        res = nullptr;
        delete output;
        output = nullptr;
    }
}