#include "myserver.h"

MyServer::MyServer(QObject *parent) :
    QTcpServer(parent),
    clients(new std::vector<MyThread*>())
{
}
// inicializuje sa server s pozadovanymi vlastnostami
void MyServer::startServer() {
    int PORT = 5656; // pri tvrdom vypnuti zostane pocuvat na porte takze treba potom zmenit cislo portu alebo prestat ten port pouzivat (neviem ako sa to robi)

    if(!this->listen(QHostAddress::Any, PORT)) { // server pocuva na porte 5656 a prijme spojenie od hocijakej IP adresy
        qDebug() << "Could not start server";
    }
    else {
        qDebug() << "Listening to port " << PORT << "...";
    }
}

// funkcia sa vykona ked sa niekto pokusi pripojit na
void MyServer::incomingConnection(qintptr socketDescriptor) {
    // We have a new connection
    qDebug() << socketDescriptor << " Connecting..." << endl;

    // pripojenie prveho klienta

    MyThread * client1 = new MyThread(socketDescriptor); // vytvori sa pre klienta samostatne vlakno

    client1->moveToThread(client1);

    connect(client1, SIGNAL(finished()), client1, SLOT(deleteLater())); // nastavia sa listenery co sa stane ked sa zrusi spojenie

    client1->start(); // spusti sa vykonavanie vlakna

    clients->push_back(client1);
}
