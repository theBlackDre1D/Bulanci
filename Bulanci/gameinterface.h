#ifndef GAMEINTERFACE_H
#define GAMEINTERFACE_H
#include "game.h"
#include "player.h"
#include "hud.h"

class GameInterface
{
public:
    GameInterface();
private:
    Game * game;        // hra ktoru dany hrac hra
    Player * player;    // hrac ktory hra na tomto klientovi
    Hud * hud;          // hud ktore sa zobrazuje
};

#endif // GAMEINTERFACE_H
