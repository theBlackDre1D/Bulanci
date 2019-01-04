#ifndef MYRECT_H
#define MYRECT_H

#include <QGraphicsRectItem>
#include "direction.h"
#include "defines.h"

class Player : public QGraphicsRectItem
{

public:
    Player();
    void keyPressEvent(QKeyEvent * event);
    void die();
    void increase_score();

    int get_score(){return score;}

private:
    Direction direction;
    int score;

};

#endif // MYRECT_H
