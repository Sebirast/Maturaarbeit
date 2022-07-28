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
 * not finished x
 */
void ParameterControlDisplay::setTitles(const char* titles[]) 
{
    int textEnlargement = 2;
    tft->textMode();
    tft->textTransparent(RA8875_BLACK);
    tft->textEnlarge(textEnlargement);

    tft->setCursor(utils::getCentrePositionX(titles[0], 800 - 160, 160, textEnlargement), utils::getCentrePositionY(titles[0], 0, 80, textEnlargement));
    tft->textWrite(titles[0]);
    tft->textSetCursor(utils::getCentrePositionX(titles[1], 800 - 160, 160, textEnlargement), utils::getCentrePositionY(titles[1], 160, 80, textEnlargement));
    tft->textWrite(titles[1]);
    tft->textSetCursor(utils::getCentrePositionX(titles[2], 800 - 160, 160, textEnlargement), utils::getCentrePositionY(titles[2], 320, 80, textEnlargement));
    tft->textWrite(titles[2]);
}

/**
 * this function sets the values corresponding to the titles and the parameter control keys
 * @param values[] the values that should be set -> int
 * not finished
 */ 
void ParameterControlDisplay::setValues(int values[], bool appendix[]) 
{
    int textEnlargement = 2;
    tft->textMode();
    tft->textTransparent(RA8875_BLACK);
    tft->textEnlarge(textEnlargement);
    tft->cp437(true);

    // Serial.println(utils::getCentrePositionY(utils::getStringFromInt(values[0]), 40, 80, textEnlargement));
    // Serial.println(utils::getCentrePositionY(utils::getStringFromInt(values[1]), 200, 80, textEnlargement));
    // Serial.println(utils::getCentrePositionY(utils::getStringFromInt(values[2]), 360, 80, textEnlargement));
    
    // tft->textSetCursor(utils::getCentrePositionX(utils::getStringFromInt(values[0]), 800 - 160, 160, textEnlargement), utils::getCentrePositionY(utils::getStringFromInt(values[0]), 80, 80, textEnlargement));
    // tft->textWrite(utils::getStringFromInt(values[0]));
    // tft->textSetCursor(utils::getCentrePositionX(utils::getStringFromInt(values[1]), 800 - 160, 160, textEnlargement), utils::getCentrePositionY(utils::getStringFromInt(values[1]), 240, 80, textEnlargement));
    // tft->textWrite(utils::getStringFromInt(values[1]));
    // tft->textSetCursor(utils::getCentrePositionX(utils::getStringFromInt(values[2]), 800 - 160, 160, textEnlargement), utils::getCentrePositionY(utils::getStringFromInt(values[2]), 400, 80, textEnlargement));
    // tft->textWrite(utils::getStringFromInt(values[2]));


    int oneMoreChar = 0;
    for(int i = 0; i < 3; i++)
    {
        oneMoreChar = 0;
        if(appendix[i])
        {
            oneMoreChar = 1;
        }
        tft->textSetCursor(utils::getCentrePositionX(utils::getStringFromInt(values[i]), 800 - 160, 160, textEnlargement) - (oneMoreChar * utils::standardTextWidth * textEnlargement), 
                           utils::getCentrePositionY(utils::getStringFromInt(values[i]), this->valueYPosition[i], 80, textEnlargement));

        Serial.println(tft->getCursorY());

        tft->textWrite(utils::getStringFromInt(values[i]));

        if(appendix[i])
        {
            tft->drawChar(utils::getCentrePositionX(utils::getStringFromInt(values[i]), 800 - 160, 160, textEnlargement) + (oneMoreChar * utils::standardTextHeight * textEnlargement * utils::getLengthOfInt(values[i])), 
                          utils::getCentrePositionY(utils::getStringFromInt(values[i]), this->valueYPosition[i], 80, textEnlargement) + (utils::standardTextHeight * textEnlargement) + 4,  
                          0x25, 
                          RA8875_BLACK, 
                          this->backgroundColour, 
                          textEnlargement);
        }
        tft->textTransparent(RA8875_BLACK);
    }
    Serial.println("loop finished");
}

/**
 * this function sets the values correponding to the titles and the encoders
 * @param values[] the values that should be set -> const char*
 */ 
void ParameterControlDisplay::setValues(const char* values[])
{

}