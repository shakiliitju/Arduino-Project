#include<LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 10, 11, 12, 13);

#define sensor A0
#define fan 7 

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
  pinMode (fan, OUTPUT);
  lcd.begin(16, 2);
  lcd.createChar(1, degree);
  lcd.setCursor(0, 0);
  lcd.print(" Automatic ");
  lcd.setCursor(0, 1);
  lcd.print("Controlled Fan");
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

  if(temperature < 25)
  {
    analogWrite (9,0);
    lcd.print(" Fan off ");
    delay(3000);
    lcd.clear();
  }
  else if(temperature <= 28)
  {
    analogWrite (fan,100);
    lcd.print("Fan Speed : 20%");
    delay(3000);
    lcd.clear();
  }
  else if(temperature <= 31)
  {
    analogWrite (fan,150);
    lcd.print("Fan Speed : 40%");
    delay(3000);
    lcd.clear();
  }
  else if(temperature <= 34)
  {
    analogWrite (fan,200);
    lcd.print("Fan Speed : 60%");
    delay(3000);
    lcd.clear();
  }
  else if(temperature <= 28)
  {
    analogWrite (fan,250);
    lcd.print("Fan Speed : 80%");
    delay(3000);
    lcd.clear();
  }
  else if(temperature >= 37)
  {
    analogWrite (fan,300);
    lcd.print("Fan Speed : 100%");
    delay(3000);
    lcd.clear();
  }
}
