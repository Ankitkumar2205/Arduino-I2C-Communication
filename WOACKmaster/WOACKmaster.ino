//master code
#include <Wire.h>
//#include <LiquidCrystal.h>
//LiquidCrystal lcd(12,11,5,4,3,2);
//char a;
void setup() {
  // put your setup code here, to run once:
Wire.begin();
Serial.begin(9600);

}

byte x=12;
void loop() {
  // put your main code here, to run repeatedly:

          
                Wire.beginTransmission(8);//to transmit data to device #8
                Wire.write("x is ");//send data 
                Wire.write(x);
                Wire.endTransmission();
                Serial.println(x);
                delay(100);
                Wire.requestFrom(8,11);
                
                
                while(Wire.available())
                { 
                 char a =Wire.read();
                  Serial.print(a);
                  //lcd.print("data received");
                  //lcd.display();
                  
                  }
                delay(300);
                
                }






