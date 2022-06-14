#include "utils/PixelCalculation.h"

/**
 * @param word the word that has to be printed to the display
 * @param x the x position of the box (upper right edge)
 * @param widthOfBox the width of the box
 * @param textEnlargement the factor that shows how much the text was made bigger by the tft->enlargeText(int enlargement)
 * 
 * @return the x position where the cursor has to be inserted if the text is centered
 * this function works allmost
 */ 
int utils::getCentrePositionX(const char* word, int x, int widthOfBox, int textEnlargment)
{
    Serial.println(strlen(word));
    return (int)(((widthOfBox - strlen(word) * utils::standardTextWidth * (textEnlargment + 1))) / 2) + x - (textEnlargment + 1);
}

/**
 * @param word the word that has to be printed to the display
 * @param y the x position of the box (upper right edge)
 * @param heightOfBox the height of the box
 * @param textEnlargement the factor that shows how much the text was made bigger by the tft->enlargeText(int enlargement)
 * 
 * @return the y position where the cursor has to be inserted if the text is centered
 */ 
int utils::getCentrePositionY(const char* word, int y, int heightOfBox, int textEnlargement)
{
    return (int)((heightOfBox - utils::standardTextHeight * (textEnlargement + 1)) / 2) + y - utils::standardTextHeight * (textEnlargement + 1);
}