
//2021-05-06 JR 

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
//#include "ESP8266WiFi.h"
LiquidCrystal_I2C lcd(0x3F, 16, 2);  // set the LCD address to 0x27 for a 16 chars and 2 line display
 
void setup()
{
  lcd.init();                      // initialize the lcd
 
  Serial.begin(9600);
 // WiFi.mode(WIFI_STA);
  lcd.backlight();
  lcd.print(" Home Assistant ");
  lcd.setCursor(0,1);
  lcd.print("ESP8266!!");
}
 
void loop()
{
   /*
  int n = WiFi.scanNetworks();
  delay(3000);
  if (n == 0)
    Serial.println("no networks found");
  else
  {
    Serial.print(n);
    Serial.println(" networks found");
    for (int i = 0; i < n; ++i)
    {
      // Print SSID and RSSI for each network found
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print(i);
      lcd.print(".");
      lcd.print(WiFi.SSID(i));
      Serial.print(WiFi.SSID(i));
      Serial.print(" (");
      Serial.print(WiFi.RSSI(i));
      Serial.print(")");
      Serial.println((WiFi.encryptionType(i) == ENC_TYPE_NONE)?" ":"*");
      delay(1500);
    }
  }
  delay(5000);
   */
}
