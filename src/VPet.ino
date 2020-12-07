/*************************************************/
/* Project: Virtual Pet                          */
/* Author: Matthew Sporich                       */
/* License: MIT                                  */
/*************************************************/

/**** Includes ***********************************/
// We require the Adafruit GFX and ST7735
//  as well as the SPI libraries.
#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>
#include <SPI.h>

/**** Defines ************************************/
// DEBUG, this enables the serial monitor
#define DEBUG

/**** Hook Up Guide ******************************/
/* The following pins are used for the screen    */
/*  D8      = CS                                 */
/*  D9      = RST                                */
/*  D10     = DC                                 */
/*  D11     = MOSI                               */
/*  D13     = SCLK (Clock)                       */
/*************************************************/
// TFT, we use a 1.44" 128x128 Color TFT w/ SPI
// https://www.amazon.ca/gp/product/B07KPYKP9C/ref=ppx_yo_dt_b_asin_title_o00_s00?ie=UTF8&psc=1
#define TFT_CS          8
#define TFT_RST         9 // This will probably change to -1 to use the Arduino's RESET pin
#define TFT_DC          10

// BUTTONS, there are currently 3 buttons on the device, this may change to four.
// Currently using Digital input, may switch to analog
#define BUTTON_LEFT     2
#define BUTTON_CEN      3
#define BUTTON_RIGHT    4
// #define BUTTON_CEN2  5

// SPEAKER, Yes we have a spaker
// Uses Digital, may switch to Analog
#define SPEAKER         6

// LED, yes we will have LED's, eventually
// Uses analog pins, also RGB LED's, they will all get tied together.
#define LED_R           0 // A0
#define LED_B           1 // A1
#define LED_G           2 // A2

Adafruit_ST7735 display = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);



void setup()
{
    // If DEBUG is defined, enable serial output
    #ifdef DEBUG
        Serial.begin(9600);
        Serial.println(F("Hello from Virtual Pet!"));
        delay(200);
    #endif

    // Initialize the screen and rotation
    display.initR(INITR_144GREENTAB); // Init ST7735R, green tab
    display.setRotation(1); // Set rotation, 1 = Pins at the bottom of display
    // display.setSPISpeed(40000000); // Uncomment if you want to use a different freqency

    #ifdef DEBUG
        Serial.println(F("Initialized"));
    #endif


	
}

void loop()
{
	
}
