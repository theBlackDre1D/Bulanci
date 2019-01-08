#include "mythread.h"

MyThread::MyThread(qintptr ID, QObject *parent) : QThread(parent)
{
    socketDescriptor = ID;
}

void MyThread::run() {
    qDebug() << " Thread started" << endl;

    socket = new QTcpSocket(this); // inicializuje sa socket

    if(!socket->setSocketDescriptor(this->socketDescriptor)) // toto je cast kodu z internetu neviem presne co to vykona ale socketDescriptor je vlastne socket ID
    {
        // something's wrong, we just emit a signal
        emit error(socket->error());
        return;
    }

    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()), Qt::DirectConnection); // nastavovanie listenerov, Qt::DirectConnection musi byt ked ideme robit s viacerymi vlaknami
    connect(socket, SIGNAL(disconnected()), this, SLOT(disconnected()));

    qDebug() << socketDescriptor << " Client connected";

    exec(); // musi to tu byt, aby sa toto loopovalo a nevykonalo len raz
}

void MyThread::send(QByteArray msg)
{
    socket->write(msg);
}

// funkcia sa vykona ked sa niekto pripoji na socket a bude nieco posielat
void MyThread::readyRead() {
    // get the information

    QByteArray Data = socket->readAll(); // precita nieco zo socketu mozno to bude treba zaobalit to if-u s podmienkou socket->canReadLine()

    // will write on server side window
    qDebug() << socketDescriptor << " Data in: " << Data; // vypis

    socket->write("echo respond: " + Data); // poslanie nieco cez socket na "druhu stranu"
}

void MyThread::disconnected()
{
    qDebug() << socketDescriptor << " Disconnected";

    socket->deleteLater();
    exit(0);
}
