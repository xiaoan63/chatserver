#include "chatserver.hpp"
#include"chatservice.hpp"
#include <iostream>
#include <signal.h>
using namespace std;

//处理服务器ctrl+C结束后，重置User的状态信息
void resetHandler(int){
    ChatService::instance()->reset();
    exit(0);    //退出程序
}

int main(int argc,char **argv)
{
    if(argc<3){
        cerr <<"command invalid: ./ChatServer 127.0.0.1 6000"<<endl;
        exit(-1);
    }

    //解析通过命令行传递的参数ip与port
    char *ip = argv[1];
    uint16_t port = atoi(argv[2]);

    signal(SIGINT,resetHandler);

    EventLoop loop;
    InetAddress addr(ip, port);
    ChatServer server(&loop, addr, "ChatServer");

    server.strat();
    loop.loop();
    return 0;
}
