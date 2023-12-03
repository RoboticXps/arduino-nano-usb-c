/*
Example for Arduino Nano USB-C with LCD Screen (I2C).
By: RoboticX Team
*/

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Define I2C address and LCD parameters
const int I2C_ADDRESS = 0x27;  // I2C address of the LCD module
const int LCD_COLS = 20;       // Number of LCD columns
const int LCD_ROWS = 4;        // Number of LCD rows

// Create an LCD object
LiquidCrystal_I2C lcd(I2C_ADDRESS, LCD_COLS, LCD_ROWS);

void setup() {
  // Initialize Serial communication
  Serial.begin(9600);

  // Initialize I2C communication
  Wire.begin();

  // Initialize the LCD and clear the display
  lcd.init();
  lcd.clear();
  
  // Turn ON LCD Backlight
  lcd.backlight();

  // Display a welcome message on the LCD
  lcd.setCursor(2, 0);
  lcd.print("Welcome Arduino");
  lcd.setCursor(3, 1);
  lcd.print("Nano, USB - C");
  lcd.setCursor(0, 3);
  lcd.print("RoboticX");
}

void loop() {
  
}
