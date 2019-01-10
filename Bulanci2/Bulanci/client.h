#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include <QTcpSocket>
#include <QHostAddress>
#include <QByteArray>

#include "player.h"

class ServerClient : public QObject
{
    Q_OBJECT
public:
    explicit ServerClient(QObject *parent = nullptr);
    void sendMessage(QByteArray message);
    Player * getPlayer(){return player;}

signals:
    void movement();

public slots:
    void on_connected();
    void on_movement();

private:
    QTcpSocket *socket;
    Player * player;

};

#endif // CLIENT_H
