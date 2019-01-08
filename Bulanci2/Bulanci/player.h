#ifndef MYRECT_H
#define MYRECT_H

#include <QGraphicsRectItem>
#include <QObject>

#include "direction.h"
#include "defines.h"
#include "player.h"

class Client;

class Player : public QGraphicsRectItem
{

public:
    Player(Client * client);
    void keyPressEvent(QKeyEvent * event);
    void die();
    void increase_score();
    int get_score(){return score;}

private:
    Direction direction;
    int score;
    Client * client;

};

#endif // MYRECT_H
