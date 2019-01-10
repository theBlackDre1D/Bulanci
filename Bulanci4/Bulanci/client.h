#ifndef CLIENT_H
#define CLIENT_H

#include <QHostAddress>
#include <QTcpSocket>
#include <QThread>
#include <QDebug>

#include "defines.h"

class Client : public QThread
{
    Q_OBJECT

public:
    Client();
    void run();

public slots:
    void onConnected();
    void readyRead();

private:
    QTcpSocket * socket;

};

#endif // CLIENT_H
