#include<LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 10, 11, 12, 13);

#define sensor A0

byte degree[8] =
{
  0b00011,
  0b00011,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

void setup()
{
  lcd.begin(16, 2);
  lcd.createChar(1, degree);
  lcd.setCursor(0, 0);
  lcd.print("    Digital    ");
  lcd.setCursor(0, 1);
  lcd.print("  Thermometer   ");
  delay(4000);
  lcd.clear();
  lcd.setCursor(2, 0);
  lcd.print("<<< JU >>>");
  lcd.setCursor(2, 1);
  lcd.print("<<< IIT >>>");
  delay(4000);
  lcd.clear();
  lcd.setCursor(2, 0);
  lcd.print(" 1st YEAR ");
  lcd.setCursor(2, 1);
  lcd.print("2st SEMESTER");
  delay(4000);
  lcd.clear();
}

void loop()
{
  /*---------Temperature-------*/
  float reading = analogRead(sensor);
  float temperature = reading * (5.0 / 1023.0) * 100;
  float fahrenheit = ((temperature * 9) / 5) + 32;
  float kelvin = temperature + 273;
  delay(10);

  /*------Display Result------*/
  lcd.clear();
  lcd.setCursor(2, 0);
  lcd.print("Temperature:");
  lcd.setCursor(4, 1);
  lcd.print(temperature);
  lcd.write(1);
  lcd.print("C");
  delay(3000);
  lcd.clear();
  lcd.setCursor(2, 0);
  lcd.print("Temperature:");
  lcd.setCursor(4, 1);
  lcd.print(fahrenheit);
  lcd.write(1);
  lcd.print("F");
  delay(3000);
  lcd.clear();
  lcd.setCursor(2, 0);
  lcd.print("Temperature:");
  lcd.setCursor(4, 1);
  lcd.print(kelvin);
  lcd.write(1);
  lcd.print("K");
  delay(3000);
}
