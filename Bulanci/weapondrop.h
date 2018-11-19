#ifndef WEAPONDROP_H
#define WEAPONDROP_H
#include "weapon.h"

class WeaponDrop
{
public:
    WeaponDrop();
private:
    Weapon * weapon; // zbran ktora je v drope
    int posX;        // position X of drop on map
    int posY;        // position Y of drop on map
};

#endif // WEAPONDROP_H
