#include "client.h"
#include <QHostAddress>


Client::Client(QObject *parent) : QObject(parent)
{
    socket = new QTcpSocket(this);

    printf("Try to connect. \n");

    connect(socket, SIGNAL(connected()), SLOT(on_connected()));

    // connecting to host
    socket->connectToHost(QHostAddress::LocalHost, 5656);
}

void Client::on_connected() {
    printf("Connection established.\n");
//    char buffer[1024];

    if (socket->canReadLine()) {
        QByteArray data = socket->readAll();
        qDebug() << "Data from server: " << data << endl;
    }

    sendMessage("Message from client");
}

void Client::sendMessage(QByteArray message) {
    socket->write(message);
}
