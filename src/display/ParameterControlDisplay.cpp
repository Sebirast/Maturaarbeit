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
 */
void ParameterControlDisplay::setTitles(const char* titles[]) 
{
    tft->textMode();

    for(int i = 40; i < 360; i += 160) {
        // tft->textSetCursor()
    }
}

/**
 * 
 */ 
void ParameterControlDisplay::setValues(int values[]) 
{

}