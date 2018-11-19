#ifndef GAME_H
#define GAME_H
#include <vector>
#include "map.h"
#include "player.h"

class Game
{
public:
    Game();
private:
    Map * map;                      // mapa na ktorej prebieha hra
    std::vector<Player*> * players; // vector hracov ktori hraju hru
};

#endif // GAME_H
