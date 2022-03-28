#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include <gdeh0154d67.h>

// Single SPI EPD
EpdSpi io;
Gdeh0154d67 display(io);

// FONT used for title / message body - Only after display library
//Converting fonts with ümlauts: ./fontconvert *.ttf 18 32 252
#include <Fonts/ubuntu/Ubuntu_M12pt8b.h>

extern "C"
{
   void app_main();
}
void delay(uint32_t millis) { vTaskDelay(millis / portTICK_PERIOD_MS); }


void demo(uint16_t bkcolor, uint16_t fgcolor)
{
   display.fillScreen(bkcolor);
   display.setTextColor(fgcolor);
   display.setCursor(10, 40);
   display.setFont(&Ubuntu_M12pt8b);
   display.println("CalEPD display test\n");
   // Print all character from an Adafruit Font
   if (true)
   {
      for (int i = 40; i <= 126; i++)
      {
         display.write(i); // Needs to be >32 (first character definition)
      }
   }
}

void app_main(void)
{
   printf("CalEPD version: %s\n", CALEPD_VERSION);
   // Test Epd class
   display.init(true);
   display.update();
   //display.setRotation(2);
   //display.update();return;
   //delay(1000);

      // Sizes are calculated dividing the screen in 4 equal parts it may not be perfect for all models
   uint8_t rectW = display.width()/4; // For 11 is 37.

   uint16_t foregroundColor = EPD_WHITE;
   
   //return;
   display.fillScreen(EPD_WHITE);
   uint16_t firstBlock = display.width()/4;
   display.fillRect(    1,1,rectW, firstBlock,foregroundColor);
   display.fillRect(rectW,1,rectW, firstBlock,EPD_WHITE);
   display.fillRect(rectW*2,1,rectW,firstBlock,foregroundColor); 
   display.fillRect(rectW*3,1,rectW-2,firstBlock,EPD_WHITE);

   display.fillRect(    1,firstBlock,rectW,firstBlock,EPD_BLACK);
   display.fillRect(rectW,firstBlock,rectW,firstBlock,foregroundColor);
   display.fillRect(rectW*2,firstBlock,rectW,firstBlock,EPD_BLACK); 
   display.fillRect(rectW*3,firstBlock,rectW-2,firstBlock,foregroundColor);

   display.setCursor(display.width()/2-130,display.height()-90);
   display.setTextColor(EPD_WHITE);
   display.setFont(&Ubuntu_M12pt8b);
   display.println("BERLIN");
   display.setTextColor(EPD_BLACK);
   display.println("demo-epaper.cpp full update is done!");
   display.update();
   // Leave the epaper White ready for storage
   delay(2000);
   display.fillScreen(EPD_WHITE);
   display.update();

   printf("display: We are done here");
}
