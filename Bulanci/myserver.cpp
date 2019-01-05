#include "myserver.h"

MyServer::MyServer(QObject *parent) :
    QTcpServer(parent)
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
    if (client1 == nullptr) {
        client1 = new MyThread(socketDescriptor, this); // vytvori sa pre klienta samostatne vlakno

        connect(client1, SIGNAL(finished()), client1, SLOT(deleteLater())); // nastavia sa listenery co sa stane ked sa zrusi spojenie

        client1->start(); // spusti sa vykonavanie vlakna
    } else if (client2 == nullptr) {
        client2 = new MyThread(socketDescriptor, this);

        connect(client2, SIGNAL(finished()), client2, SLOT(deleteLater()));

        client2->start();
    } else {
        qDebug() << "Maximum numbers of players reached" << endl;
    }

    // je to spravene tak, ze sa mozu pripojit 2 teoreticky by to malo fungovat aj tak, ze sa moze pripojit aj viacej klientov
}
