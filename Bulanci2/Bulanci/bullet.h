#ifndef BULLET_H
#define BULLET_H

#include <QGraphicsRectItem>
#include <QObject>
#include "direction.h"
#include "player.h"

class Bullet : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Bullet(Direction direction, Player * player);

public slots:
    void move();

private:
    Direction direction;
    Player * shooter;

};

#endif // BULLET_H
