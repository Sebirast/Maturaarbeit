#include "display/ParameterControlDisplay.h"

using namespace display;

ParameterControlDisplay::ParameterControlDisplay(Adafruit_RA8875* tft) 
{
    this->tft = tft;
}

/**
 * this function draws the three boxes where the parameters are displayed
 */
void ParameterControlDisplay::drawRectangles() 
{
    // TODO: find more beautiful colour x
    // TODO: try out the more beautiful colour  
    tft->fillRoundRect(x, 0, width, height, radius,  backgroundColour);
    tft->fillRoundRect(x, 480 / 3, width, height, radius, backgroundColour);
    tft->fillRoundRect(x, 2 * (480 / 3), width, height, radius, backgroundColour);

    tft->drawRoundRect(x, 0, width, height, radius,  borderColour);
    tft->drawRoundRect(x, 480 / 3, width, height, radius, borderColour);
    tft->drawRoundRect(x, 2 * (480 / 3), width, height, radius, borderColour);
}

/**
 * this function sets the tiltes in the boxes
 * not finished
 */
void ParameterControlDisplay::setTitles(const char* titles[]) 
{
    tft->textMode();
    tft->textTransparent(RA8875_BLACK);
    tft->textEnlarge(1);

    tft->textSetCursor(utils::getCentrePositionX(titles[0], 800 - 160, 160, 1), utils::getCentrePositionY(titles[0], 0, 80, 1));
    tft->textWrite(titles[0]);
    tft->textSetCursor(utils::getCentrePositionX(titles[1], 800 - 160, 160, 1), utils::getCentrePositionY(titles[1], 160, 80, 1));
    tft->textWrite(titles[1]);
    tft->textSetCursor(utils::getCentrePositionX(titles[0], 800 - 160, 160, 1), utils::getCentrePositionY(titles[2], 320, 80, 1));
    tft->textWrite(titles[2]);
}

/**
 * this function sets the values corresponding to the titles and the encoders
 * not finished
 */ 
void ParameterControlDisplay::setValues(int values[]) 
{

}

void ParameterControlDisplay::setValues(const char* values[])
{

}