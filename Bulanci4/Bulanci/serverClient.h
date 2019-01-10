#ifndef SERVERCLIENT_H
#define SERVERCLIENT_H

#include <QTcpSocket>
#include <QThread>
#include <QDebug>

#include "player.h"

class ServerClient : public QThread
{
    Q_OBJECT

public:
    ServerClient(qintptr socketDescriptor);
    void run();

signals:
    void error(QTcpSocket::SocketError error);
    void moveUp(ServerClient *);
    void moveDown(ServerClient *);
    void moveLeft(ServerClient *);
    void moveRight(ServerClient *);
    void shoot(ServerClient *);

public slots:
    void sendMessage(QByteArray message);
    void readyRead();

private:
    QTcpSocket * socket;
    Player * player;
    qintptr socketDescriptor;

};

#endif // SERVERCLIENT_H
