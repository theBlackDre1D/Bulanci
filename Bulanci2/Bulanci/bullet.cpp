#include "bullet.h"
#include <QTimer>
#include "defines.h"
#include <QGraphicsScene>
#include <QDebug>
#include "player.h"

Bullet::Bullet(Direction direction, Player * player)
    : direction(direction),
      shooter(player)
{
    setRect(0,0,BULLET_HEIGHT,BULLET_WIDTH);

    QTimer * timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));

    timer->start(10);
}

void Bullet::move()
{
    switch(direction)
    {
        case Direction::UP:
            setPos(x(), y() - 10);
            break;
        case Direction::DOWN:
            setPos(x(), y() + 10);
            break;
        case Direction::LEFT:
            setPos(x() - 10, y());
            break;
        case Direction::RIGHT:
            setPos(x() + 10, y());
            break;
    }

    for(const auto item: scene()->items())
    {
        Player * p;
        if(p = dynamic_cast<Player*>(item))
        {
            if(x() <= p->x() + PLAYER_WIDTH
                    && x() >= p->x()
                    && y() <= p->y() + PLAYER_HEIGHT
                    && y() >= p->y()
                    && p != shooter)
            {
                p->die();
                scene()->removeItem(this);
                shooter->increase_score();
                delete this;
                return;
            }
        }
    }

    if(x() < MIN_X || x() > MAX_X || y() < MIN_Y || y() > HUD_Y)
    {
        scene()->removeItem(this);
        delete this;
    }
}
