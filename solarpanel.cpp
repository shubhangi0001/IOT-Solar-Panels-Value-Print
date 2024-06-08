// C++ code
//
#include <Adafruit_LiquidCrystal.h>

int solar_cell = 0;

Adafruit_LiquidCrystal lcd_1(0);

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  lcd_1.begin(16, 2);
}

void loop()
{
  solar_cell = (analogRead(A0) * (5.001 / 1023.001));
  Serial.println(solar_cell);
  lcd_1.setCursor(0, 0);
  lcd_1.print("Solar Cell Volt");
  lcd_1.setCursor(0, 1);
  lcd_1.print("Value=");
  lcd_1.setCursor(10, 1);
  lcd_1.print(solar_cell);

  lcd_1.print(0);
  delay(10); // Delay a little bit to improve simulation performance
}
