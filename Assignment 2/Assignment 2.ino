#define LILYGO_WATCH_2019_WITH_TOUCH
#include <LilyGoWatch.h>

TTGOClass *ttgo;

void setup()
{
    Serial.begin(115200);
    ttgo = TTGOClass::getWatch();
    ttgo->begin();
    ttgo->openBL();

    ttgo->tft->fillScreen(TFT_WHITE);
    ttgo->tft->setTextColor(TFT_BLACK, TFT_WHITE);
    ttgo->tft->setTextFont(4);

    // Get the width and height 
    int textWidth = ttgo->tft->textWidth("Gargi Gaitonde"); 
    int textHeight = ttgo->tft->fontHeight(4);

    // Calculate the coordinates to center the text
    int centerX = (240 - textWidth) / 2;
    int centerY = (240 - textHeight) / 2;

    // Draw the text centered on the screen
    ttgo->tft->drawString("Gargi Gaitonde", centerX, centerY);
}

void loop()
{ 
}
