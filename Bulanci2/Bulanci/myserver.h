// myserver.h

#ifndef MYSERVER_H
#define MYSERVER_H

#include <QTcpServer>
#include <vector>

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
    std::vector<MyThread*> * clients;
};

#endif // MYSERVER_H
