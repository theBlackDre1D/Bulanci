#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include <QTcpSocket>
#include <QHostAddress>
#include <string.h>
#include <QByteArray>

using namespace std;

class Client : public QObject
{
    Q_OBJECT
public:
    explicit Client(QObject *parent = nullptr);

    void sendMessage(QByteArray message);

signals:

public slots:
    void on_connected();

private:
    QTcpSocket *socket;

};

#endif // CLIENT_H
