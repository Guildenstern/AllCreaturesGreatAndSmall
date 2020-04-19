/**
 *  Quick start example for SSD1306 based OLED to be used with DigisparkOLED
 */

#include <DigisparkOLED.h>
#include <font6x8.h>
#include <font8x16.h>

#define SSD1306    0x78  

void setup() {
  // put your setup code here, to run once:

  oled.begin();

}

void loop() {
  
  // put your main code here, to run repeatedly:
  oled.fill(0xFF); //fill screen with color
  delay(1000);
  oled.clear(); //all black
  delay(1000);
  //usage: oled.setCursor(X IN PIXELS, Y IN ROWS OF 8 PIXELS STARTING WITH 0);
  oled.setCursor(0, 0); //top left
  oled.setFont(FONT8X16);
  oled.print(("Huhu!")); //wrap strings in F() to save RAM!
  oled.setFont(FONT6X8);
  oled.print(F(" OLED!"));
  oled.setCursor(0, 2); //two rows down because the 8x16 font takes two rows of 8
  oled.println(F("me fail english? unpossible")); //println will move the cursor 8 or 16 pixels down (based on the front) and back to X=0
  oled.print(F("Well played")); //lines auto wrap
  
  delay(3000);
}
