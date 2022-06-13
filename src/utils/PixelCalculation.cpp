#include "utils/PixelCalculation.h"


int utils::getCentrePositionX(const char* word, int x, int widthOfBox, int textEnlargment)
{
    return (int)((widthOfBox - strlen(word) * utils::standardTextWidth * textEnlargment) / 2) + x;
}

int utils::getCentrePositionY(const char* word, int y, int heightOfBox, int textEnlargement)
{
    return (int)((heightOfBox - utils::standardTextHeight * textEnlargement) / 2) + y;
}


