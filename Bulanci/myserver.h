// myserver.h

#ifndef MYSERVER_H
#define MYSERVER_H

#include <QTcpServer>

#include "mythread.h"

class MyServer : public QTcpServer
{
    Q_OBJECT
public:
    explicit MyServer(QObject *parent = nullptr);
    void startServer();
signals:

public slots:

protected:
    void incomingConnection(qintptr socketDescriptor);


private:
    MyThread *client1 = nullptr;
    MyThread *client2 = nullptr;
};

#endif // MYSERVER_H
