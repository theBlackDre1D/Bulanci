#ifndef SERVER_H
#define SERVER_H

#include <QTcpServer>
#include <QDebug>
#include <vector>

#include "defines.h"
#include "serverClient.h"

class Server : public QTcpServer
{
    Q_OBJECT

public:
    Server(QObject * parent = nullptr);
    void start();

signals:
    void newClient(qintptr, ServerClient *);

public slots:
    void incomingConnection(qintptr socketDescriptor);
    void moveUp(ServerClient* client);
    void moveDown(ServerClient* client);
    void moveLeft(ServerClient* client);
    void moveRight(ServerClient* client);

private:
    std::vector<ServerClient*> * clients;

};

#endif // SERVER_H
