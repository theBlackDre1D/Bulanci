#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>

#include "myrect.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // create a scene
    QGraphicsScene * scene = new QGraphicsScene();

    // create an item
    MyRect * player = new MyRect();
    player->setRect(0,0,100,100);

    // add item to scene
    scene->addItem(player);

    // focus my item
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();

    // add view
    QGraphicsView * view = new QGraphicsView(scene);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    view->setFixedSize(1280,720);
    scene->setSceneRect(0,0,1280,720);
    view->show();

    player->setPos(view->width()/2, view->height()/2);

    return a.exec();
}
