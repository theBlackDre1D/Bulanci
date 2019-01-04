#include <QKeyEvent>
#include <QGraphicsScene>
#include "bullet.h"

#include "player.h"

Player::Player()
    :QGraphicsRectItem::QGraphicsRectItem(),
      direction(Direction::UP),
      score(0)
{
    setRect(0,0,PLAYER_WIDTH,PLAYER_HEIGHT);
}

void Player::keyPressEvent(QKeyEvent *event)
{

    if(event->key() == Qt::Key_Left)
    {
        setPos(x() - PLAYER_VELOCITY, y());
        direction = Direction::LEFT;
    }
    else if(event->key() == Qt::Key_Right)
    {
        setPos(x() + PLAYER_VELOCITY, y());
        direction = Direction::RIGHT;
    }

    if(event->key() == Qt::Key_Up)
    {
        setPos(x(), y() - PLAYER_VELOCITY);
        direction = Direction::UP;
    }
    else if(event->key() == Qt::Key_Down)
    {
        setPos(x(), y() + PLAYER_VELOCITY);
        direction = Direction::DOWN;
    }        

    if(x() < MIN_X)
        setPos(MIN_X, y());
    if(x() + PLAYER_WIDTH > MAX_X)
        setPos(MAX_X - PLAYER_WIDTH, y());
    if(y() < MIN_Y)
        setPos(x(), MIN_Y);
    if(y() + PLAYER_HEIGHT > HUD_Y)
        setPos(x(), HUD_Y - PLAYER_HEIGHT);

    if(event->key() == Qt::Key_Space)
    {
        Bullet * bullet = new Bullet(direction, this);
        int add_x = direction==Direction::RIGHT ? PLAYER_WIDTH : 0;
        int add_y = direction==Direction::DOWN ? PLAYER_HEIGHT : 0;
        bullet->setPos(x() + add_x,y() +add_y);
        scene()->addItem(bullet);
    }
}

void Player::die()
{
    scene()->removeItem(this);
    delete this;
}

void Player::increase_score()
{
    ++score;
}

