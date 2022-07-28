#pragma once

#include <Arduino.h>
#include <Adafruit_GFX.h>
#include <Adafruit_RA8875.h>
#include "utils/PixelCalculation.h"
#include "utils/StringCalculation.h"

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

            int titleYPosition[3] = {};
            int valueYPosition[3] = {80, 240, 400};

        public:
            ParameterControlDisplay(Adafruit_RA8875* tft);
            void init();
            void setMode();
            void drawRectangles();
            void setTitles(const char* titles[]);
            void setValues(int values[], bool appendix[]);
            void setValues(const char* values[]);
    };
}