#include "SDLSystem.h"

#include <iostream>

SDLSystem::SDLSystem()
{
}


SDLSystem::~SDLSystem()
{
    // Clean up
    SDL_DestroyRenderer(mRenderer);
    SDL_DestroyWindow(mWindow);
    SDL_Quit();
}

void SDLSystem::Clear()
{
    SDL_RenderClear(mRenderer);
}

void SDLSystem::Redraw()
{
    SDL_RenderPresent(mRenderer);
}

ApplicationDefines::ResultCode SDLSystem::ProcessEvents()
{
    SDL_Event event;
    if (SDL_PollEvent(&event))
    {
        if (event.type == SDL_QUIT)
        {
            return ApplicationDefines::QuitGame;
        }
        else if (event.type == SDL_MOUSEBUTTONDOWN)
        {
            return ApplicationDefines::MouseClick;
        }
    }

    return ApplicationDefines::Ok;
}

SDL_Renderer* SDLSystem::GetRenderer()
{
    return mRenderer;
}

SDL_Window *SDLSystem::GetWindow()
{
    return mWindow;
}

ApplicationDefines::ResultCode SDLSystem::Init()
{
    int result = SDL_Init(SDL_INIT_EVERYTHING);
    if (result != 0)
    {
        std::cout << "Unable to initialize SDL: " << SDL_GetError();
        return ApplicationDefines::ErrorInitSDLSystem;
    }

    mWindow = SDL_CreateWindow("Interactive game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, ApplicationDefines::WINDOW_WIDTH, ApplicationDefines::WINDOW_HEIGHT, 0);
    if (mWindow == nullptr)
    {
        std::cout << "Could not create window : " << SDL_GetError();
        return ApplicationDefines::ErrorInitWindow;
    }

    mRenderer = SDL_CreateRenderer(mWindow, -1, SDL_RENDERER_TARGETTEXTURE | SDL_RENDERER_ACCELERATED);
    if (mRenderer == nullptr)
    {
        std::cout << "Could not create renderer : " << SDL_GetError();
        return ApplicationDefines::ErrorInitRenderer;
    }

    return ApplicationDefines::Ok;
}

ApplicationDefines::ResultCode SDLSystem::LoadBitmap(const char * fileName, SDL_Texture *& texture)
{
    SDL_Surface *bmp = SDL_LoadBMP(fileName);
    if (bmp == nullptr)
    {
        std::cout << "Could not create bitmap surface : " << SDL_GetError();
        return ApplicationDefines::ErrorLoadBitmap;
    }

    texture = SDL_CreateTextureFromSurface(mRenderer, bmp);
    if (texture == nullptr)
    {
        std::cout << "Could not create texture : " << SDL_GetError();
        return ApplicationDefines::ErrorCreateTextureFromSurface;
    }

    return ApplicationDefines::Ok;
}

ApplicationDefines::ResultCode SDLSystem::DrawBitmap(SDL_Texture * texture, int width, int height, int positionX, int positionY)
{
    SDL_Rect destRectangle;
    destRectangle.w = width;
    destRectangle.h = height;
    destRectangle.x = positionX;
    destRectangle.y = positionY;

    int sdlResult = SDL_RenderCopy(mRenderer, texture, NULL, &destRectangle);
    if (sdlResult != 0)
    {
        return ApplicationDefines::ErrorDrawBitmap;
    }

    return ApplicationDefines::Ok;
}

