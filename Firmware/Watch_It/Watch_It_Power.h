#ifndef Watch_It_Power_h
#define Watch_It_Power_h

#include <Arduino.h>

class Watch_It_Power
{
private:
  

public:

  Watch_It_Power();
  void begin();
  
  bool isCharging(); 
  uint16_t getBatteryVoltage();

  void enableGPS();
  void disableGPS();

  void enableMP3();
  void disableMP3();
  
};

#endif
