#include "client.h"

ServerClient::ServerClient(QObject *parent) :
    QObject(parent),
    player(new Player(this))
{
    socket = new QTcpSocket(this);

    connect(socket, SIGNAL(connected()), SLOT(on_connected()));
    connect(this, SIGNAL(movement()), this, SLOT(on_movement()));
    // connecting to host
    socket->connectToHost(QHostAddress::LocalHost, 5656);
}

void ServerClient::on_connected() {
    qDebug () << "Connection established.";

    if (socket->canReadLine()) {
        QByteArray data = socket->readAll();
        qDebug() << "Data from server: " << data << endl;
    }

    sendMessage("Message from client");
}

void ServerClient::sendMessage(QByteArray message) {
    socket->write(message);
}

void ServerClient::on_movement(){
    sendMessage("movement");
}
