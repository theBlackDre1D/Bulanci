#include "serverClient.h"

ServerClient::ServerClient(qintptr socketDescriptor):
    QThread(),
    socketDescriptor(socketDescriptor),
    player(new Player())
{

}

void ServerClient::run()
{
    qDebug() << "starting new client";
    socket = new QTcpSocket();
    if(socket->setSocketDescriptor(socketDescriptor))
    {
        connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()), Qt::DirectConnection);
        connect(socket, SIGNAL(disconnected()), this, SLOT(deleteLater()));
        sendMessage("message");
    }
    else
    {
        qDebug() << "error " << socketDescriptor;
        emit error(socket->error());
    }

    qDebug() << "new client connected " << socketDescriptor;

    exec();
}

void ServerClient::sendMessage(QByteArray message)
{
    socket->write(message);
    socket->flush();
}

void ServerClient::readyRead()
{
    QByteArray message = socket->readAll();
    qInfo() << socketDescriptor << message;
}
