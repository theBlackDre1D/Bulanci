#pragma once
#include <chrono>

using namespace std;


class ApplicationDefines
{
public:
    enum ResultCode
    {
        Ok                            = 0,
        ErrorInitWindow               = 1,
        ErrorInitRenderer             = 2,
        ErrorCreateTextureFromSurface = 3,
        ErrorLoadBitmap               = 4,
        ErrorInitSDLSystem            = 5,
        QuitGame                      = 6,
        ErrorDrawBitmap               = 7,
        MouseClick                    = 8,
        OutOfAreaY                    = 9,
        OutOfAreaX                    = 10
    };

    static const int WINDOW_WIDTH = 640;
    static const int WINDOW_HEIGHT = 480;
};
