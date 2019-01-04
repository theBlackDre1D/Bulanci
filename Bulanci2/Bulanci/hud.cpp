#include "hud.h"
#include <QGraphicsScene>
#include <QFont>

Hud::Hud(Player *player)
    :QGraphicsRectItem::QGraphicsRectItem(),
    drawer(new ScoreDrawer(player))
{
    setRect(HUD_X, HUD_Y , HUD_WIDTH , HUD_HEIGHT);
}

void Hud::init()
{
    scene()->addItem(drawer);
}

ScoreDrawer::ScoreDrawer(Player *player)
    :QGraphicsTextItem::QGraphicsTextItem(),
      player(player)
{
    setPlainText("Score: " + QString::number(player->get_score()));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times",16));
}
