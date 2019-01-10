#include "server.h"

Server::Server(QObject * parent) :
    QTcpServer(parent),
    clients(new std::vector<ServerClient*>())
{

}

void Server::start()
{
    if(this->listen(QHostAddress::Any, SERVER_PORT))
    {
        qDebug() << "Listening to port " << SERVER_PORT;
    }
    else
    {
        qDebug() << "Could not start server";
    }
}

void Server::incomingConnection(qintptr socketDescriptor)
{
    ServerClient * client = new ServerClient(socketDescriptor);
    client->start();
    client->moveToThread(client);

    connect(client, SIGNAL(moveDown(ServerClient*)), SLOT(moveDown(ServerClient*)), Qt::QueuedConnection);
    connect(client, SIGNAL(moveUp(ServerClient*)), SLOT(moveUp(ServerClient*)), Qt::QueuedConnection);
    connect(client, SIGNAL(moveLeft(ServerClient*)), SLOT(moveLeft(ServerClient*)), Qt::QueuedConnection);
    connect(client, SIGNAL(moveRight(ServerClient*)), SLOT(moveRight(ServerClient*)), Qt::QueuedConnection);


    clients->push_back(client);
    emit newClient(socketDescriptor, client);

    qDebug() << " new client connected";
}

void Server::moveUp(ServerClient *client)
{

}

void Server::moveDown(ServerClient *client)
{

}

void Server::moveLeft(ServerClient *client)
{

}

void Server::moveRight(ServerClient *client)
{

}
