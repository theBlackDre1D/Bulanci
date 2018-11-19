#ifndef PLAYER_H
#define PLAYER_H
#include "weapon.h"

class Player
{
public:
    Player();
private:
    Weapon * weapon;    // aktualna playerova zbran
    int posX;           // position X of player on map
    int posY;           // position Y of player on map
};

#endif // PLAYER_H
