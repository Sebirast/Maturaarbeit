#pragma once

#include <Arduino.h>

namespace utils 
{
    inline int standardTextHeight = 7;
    inline int standardTextWidth = 7;

    int getCentrePositionX(const char * word, int x, int widthOfBox, int textEnlargment);

    int getCentrePositionY(const char * word, int y, int heightOfBox, int textEnlargement);
}
