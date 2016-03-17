#ifndef _CLOCK_H_
  #define _CLOCK_H_
  #define byte uint8_t
  #define DS3231_I2C_ADDRESS 0x68

  byte decToBcd(byte val);
  byte bcdToDec(byte val);
  void setDS3231time(byte second, byte minute, byte hour, byte dayOfWeek, byte dayOfMonth, byte month, byte year);
  void readDS3231time(byte *second, byte *minute, byte *hour, byte *dayOfWeek, byte *dayOfMonth, byte *month, byte *year);
  String getTime();
  
#endif
