#include <LiquidCrystal_I2C.h>
int sensorPin = A2; 
int sensorValue = 0; 

int red = 7; 
int green1 = 2;
int green2 = 3;

int buzzer = 12; 

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
pinMode(red, OUTPUT);
pinMode(green1, OUTPUT);
pinMode(green2, OUTPUT);


pinMode(buzzer,OUTPUT);

Serial.begin(9600);

  lcd.init();
  lcd.backlight();
  lcd.clear();

  lcd.clear();
  lcd.print(" IOT Project -  ");
  lcd.setCursor(0, 1);
  lcd.print("   for C.O.A.   ");
  delay(2500);

  lcd.clear();
  lcd.print("FIRE DETECTION");
  lcd.setCursor(0, 1);
  lcd.print("with  ALARM.....");
  delay(2500);

  lcd.clear();
  lcd.print("   SYSTEM  ON   ");
  lcd.setCursor(0, 1);
  lcd.print("Status - NO FIRE");

}

void loop()

{

//digitalWrite(green,HIGH);
//digitalWrite(red,LOW);
sensorValue = analogRead(sensorPin);

Serial.println(sensorValue);

if (sensorValue < 900)

{

digitalWrite(red,HIGH);
digitalWrite(green1,LOW);
digitalWrite(green2,LOW);
tone(buzzer, 490, 2000);
delay(400);
digitalWrite(red,LOW);
digitalWrite(green1,LOW);
digitalWrite(green2,LOW);
tone(buzzer, 610, 2000);

delay(100);

}else{
  digitalWrite(green1,HIGH);
  digitalWrite(green2,HIGH);
  digitalWrite(red,LOW);
  noTone(buzzer);
}

//digitalWrite(red,LOW);
//digitalWrite(green1,LOW);
//digitalWrite(green2,LOW);
//noTone(2);

if (sensorValue < 36)
{
  lcd.clear();
  lcd.print("FIRE !! FIRE !! ");
  lcd.setCursor(0, 1);
  lcd.print("Intensity - HIGH");
  delay(500);
}else if (sensorValue < 600)
{
  lcd.clear();
  lcd.print("FIRE !! FIRE !! ");
  lcd.setCursor(0, 1);
  lcd.print("Intensity - MID");
  delay(500);
}else if (sensorValue < 900)
{
  lcd.clear();
  lcd.print("FIRE !! FIRE !! ");
  lcd.setCursor(0, 1);
  lcd.print("Intensity - LOW");
  delay(500);
}else
{
  lcd.clear();
  lcd.print("   SYSTEM  ON   ");
  lcd.setCursor(0, 1);
  lcd.print("Status - NO FIRE");
  delay(500);
}

}
