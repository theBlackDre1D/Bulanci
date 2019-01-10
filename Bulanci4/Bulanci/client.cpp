#include "client.h"

Client::Client():
    QThread()
{
    start();
    moveToThread(this);
}

void Client::run()
{
    socket = new QTcpSocket();

    connect(socket, SIGNAL(connected()), this, SLOT(onConnected()));
    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()));

    socket->connectToHost(QHostAddress::LocalHost, SERVER_PORT);

    qDebug() << "connected";
}

void Client::onConnected()
{
    socket->write("connected");
}

void Client::readyRead()
{
    QByteArray data = socket->readAll();

    qDebug() << data;
}




