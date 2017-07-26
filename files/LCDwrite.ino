#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
	// initialize the LCD
	lcd.init();

	// Turn on the blacklight and print a message.
	lcd.backlight();
	lcd.print("Hello, world!");
  lcd.setCursor(0,1);
  lcd.print("DON'T TOUCH");
}

void loop()
{
	// Do nothing here...
}

/*

The code below is deprecated with the new version of the library.
Please ensure that you understand how the new code works with caution.

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#define BACKLIGHT_PIN     3
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7,
BACKLIGHT_PIN, POSITIVE);  // Set the LCD I2C address
void setup()
{
  // Switch on the backlight
  pinMode ( BACKLIGHT_PIN, OUTPUT );
  digitalWrite ( BACKLIGHT_PIN, HIGH );
  lcd.begin(16,2);
  lcd.home ();
  lcd.print("Hello, ARDUINO ");
  lcd.setCursor ( 0, 1 );
  lcd.print ("This is an LCD");
}
void loop() {
}

*/
