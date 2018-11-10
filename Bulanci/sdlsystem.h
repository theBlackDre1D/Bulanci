#pragma once

#include "SDL.h"
#include "ApplicationDefines.h"
#include <string>

using namespace std;

class SDLSystem
{
public:
    SDLSystem();
    ~SDLSystem();

    void Clear();
    void Redraw();
    ApplicationDefines::ResultCode ProcessEvents();
    SDL_Renderer* GetRenderer();
    SDL_Window* GetWindow();

    ApplicationDefines::ResultCode Init();
    ApplicationDefines::ResultCode LoadBitmap(const char *fileName, SDL_Texture *&texture);
    ApplicationDefines::ResultCode DrawBitmap(SDL_Texture *texture, int width, int height, int positionX, int positionY);

private:
    SDL_Window *mWindow;
    SDL_Renderer *mRenderer;
};

