#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>

#include "player.h"
#include "hud.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // create a scene
    QGraphicsScene * scene = new QGraphicsScene();

    // create an item
    Player * player = new Player();
    scene->addItem(player);

    // create hud
    Hud * hud = new Hud(player);
    scene->addItem(hud);
    hud->init();

    // test enemy
    Player * testEnemy = new Player();
    testEnemy->setPos(50,50);
    scene->addItem(testEnemy);

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
