#ifndef HUD_H
#define HUD_H

#include <QGraphicsRectItem>
#include <QGraphicsTextItem>

#include "defines.h"
#include "player.h"

class ScoreDrawer: public QGraphicsTextItem
{
public:
    ScoreDrawer(Player * player);
private:
    Player * player;
};

class Hud : public QGraphicsRectItem
{
public:
    Hud(Player * player);
    void init();
private :
    ScoreDrawer * drawer;
};

#endif // HUD_H
