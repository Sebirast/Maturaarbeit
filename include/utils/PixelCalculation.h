#pragma once

namespace utils 
{
    int standardTextHeight = 7;
    int standardTextWidth = 6;

    int getCentrePositionX(const char * word, int widthOfBox, int textEnlargment);

    int getCentrePositionY(const char * word, int heightOfBox, int textEnlargement);

    int* getCentrePositionXY(const char * word, int x, int y, int widthOfBox, int heightOfBox, int textEnlargment);
}