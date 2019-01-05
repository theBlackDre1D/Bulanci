#include <QCoreApplication>

#include "myserver.h"
#include "client.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyServer myServer;
    myServer.startServer();

    Client *client1 = new Client();
    Client *client2 = new Client();
    Client *client3 = new Client(); // lepsie osetrit ked sa bude chciet 3. darmozrac pripojit

    return a.exec();
}
