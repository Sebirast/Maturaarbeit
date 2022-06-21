#pragma once

#include <Arduino.h>
#include <Adafruit_GFX.h>
#include <Adafruit_RA8875.h>
#include "utils/PixelCalculation.h"

namespace display {
    class ParameterControlDisplay{
        private:
            Adafruit_RA8875* tft;
            uint16_t backgroundColour = 0x333F;
            uint16_t borderColour = 0x0000;
            int x = 800 - (480 / 3);
            int height = 160;
            int width = 160;

            int radius = 10;

        public:
            ParameterControlDisplay(Adafruit_RA8875* tft);
            void init();
            void setMode();
            void drawRectangles();
            void setTitles(const char* titles[]);
            void setValues(int values[]);
            void setValues(const char* values[]);
    };
}