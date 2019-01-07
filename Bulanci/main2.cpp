#include <QCoreApplication>

#include "myserver.h"
#include "client.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyServer myServer;
    myServer.startServer(); // spusti sa server

    // iba na otestovanie pripojenia ci si budu vymienat spravy
    Client *client1 = new Client();
    Client *client2 = new Client();
    Client *client3 = new Client(); // lepsie osetrit ked sa bude chciet 3. darmozrac pripojit

    return a.exec();
}
