#include<Wire.h>
#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
void setup() {
  // put your setup code here, to run once:
Wire.begin(8);
Wire.onReceive(receiveEvent);
Serial.begin(9600);
//lcd.setCursor(0,0);
Wire.onRequest(requestEvent);
}

void loop() {
  // put your main code here, to run repeatedly:
 
delay(5000);



}

void receiveEvent(int data)
{while(Wire.available()>1){
  char c =Wire.read();
 Serial.print(c);
  //lcd.print(c);
  //lcd.display();
  
  }

int x=Wire.read();
 Serial.println(x);
  //lcd.print(x);
  //lcd.display();
   delay(500);
}

void requestEvent()
{
  Wire.write("i");
  }
