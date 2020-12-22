#include <LiquidCrystal.h>            
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);

void setup() {
  // put your setup code here, to run once:
lcd.begin(20,4);
Serial.begin(9600); //initialize serial communication at 9600 bits per second
lcd.setCursor(0,0);
lcd.print("Wireless Serial");
lcd.setCursor(0,1);
lcd.print("Communication via 2.4 GHz");
lcd.setCursor(0,2);
lcd.print("Modem at PNJ.....");                     
}

void loop() {
  // put your main code here, to run repeatedly:
int TEMP_VALUE = Serial.read();
lcd.setCursor(0,3);
lcd.print("Temp. in 0C :");
lcd.setCursor(13,3);
lcd.print(TEMP_VALUE); //print temperature value on LCD
delay(100);
Serial.print("TEMP_VAL :");
Serial.println(TEMP_VALUE);
delay(100); //delay in between reads for stability
}
