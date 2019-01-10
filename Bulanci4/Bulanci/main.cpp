#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>

#include "server.h"
#include "client.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Server server;
    server.start();

    QGraphicsScene * scene = new QGraphicsScene();

    QGraphicsView * view = new QGraphicsView(scene);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    view->setFixedSize(1280,720);
    scene->setSceneRect(0,0,1280,720);
    view->show();

    Client * client = new Client();

    return a.exec();
}
