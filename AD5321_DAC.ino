//AD5321 DAC 12bit Adrduino
#include <Wire.h>

unsigned int val = 2030; //Value of output voltage from 0 to 4095

void setup() 
{
  Wire.begin(); // join i2c bus
}

void loop() 
{
  Wire.beginTransmission(14); // transmit to device #44 (0x2c)
  Wire.write(val >> 8);       // Upper data bits
  Wire.write(val & 0xff);     // Lower data bits     
  Wire.endTransmission();     // stop transmitting
  delay(500);
}
