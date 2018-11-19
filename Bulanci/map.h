#ifndef MAP_H
#define MAP_H
#include <vector>
#include "weapondrop.h"
#include "bullet.h"

class Map
{
public:
    Map();
private:
    std::vector<WeaponDrop*> * weaponDrops; // vector zbrani ktore sa daju zodvihnut
    std::vector<Bullet*> * bullets;         // vector nabojov ktore akurat sa pohybuju po mape
};

#endif // MAP_H
