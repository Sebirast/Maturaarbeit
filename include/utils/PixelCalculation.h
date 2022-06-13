#pragma once

#include <Arduino.h>

namespace utils 
{
    inline int standardTextHeight = 7;
    inline int standardTextWidth = 6;

    int getCentrePositionX(const char * word, int x, int widthOfBox, int textEnlargment);

    int getCentrePositionY(const char * word, int y, int heightOfBox, int textEnlargement);

    int* getCentrePositionXY(const char * word, int x, int y, int widthOfBox, int heightOfBox, int textEnlargment);
}
