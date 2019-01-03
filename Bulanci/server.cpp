#include "server.h"

Server::Server(QObject *parent) : QObject(parent)
{
    mServer = new QTcpServer(this);

    connect(mServer, SIGNAL(newConnection()), this, SLOT(newConnection()));

    if(!mServer->listen(QHostAddress::Any, 1234)) {
        qDebug() << "Server could not start!" << endl;
    } else {
        qDebug() << "Server started!" << endl;
    }
}

void Server::newConnection() {
    QTcpSocket *socket = mServer->nextPendingConnection();
    socket->write("Hello on the other side! \n");
    socket->flush();

    socket->waitForBytesWritten(3000);

    socket->close();
    qDebug() << "Server stoped!" << endl;

}
