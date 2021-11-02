#include <Wire.h>
#include "SSD1306Wire.h"
SSD1306Wire  display(0x3c, 21, 22);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
   pinMode(13,INPUT);
   display.init();
  display.flipScreenVertically();

  display.clear();
  
}

void loop() {
  display.clear();
  // put your main code here, to run repeatedly:
    int input =analogRead(13);
    String str = String(input);
    display.setFont(ArialMT_Plain_16);
  display.drawString(0,0,str);
  display.display();
 Serial.println(input);
  delay(10);
  
}
