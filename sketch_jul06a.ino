#include <LiquidCrystal.h>
int a,b,c ;
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


void setup() {

  pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);
      pinMode(10,OUTPUT);
  lcd.clear();
  lcd.begin(16,2);
  lcd.setCursor(1,0);
  lcd.print("Street Light");
  lcd.setCursor(1,1);
  lcd.print("Project");
  delay(1000);
  lcd.clear();
  
}

void loop() 
{

a = analogRead(A0);
b = map(a,0,1023,0,255);
Serial.println(b);
if(b<220)
{
  lcd.setCursor(1,0);
  lcd.println("Low Light  ");

  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  }
  if(b>220)
{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  lcd.setCursor(1,0);
  lcd.println("High Light  ");
  }  
}
