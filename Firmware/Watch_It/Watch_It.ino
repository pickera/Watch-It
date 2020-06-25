#include "Watch_It_Power.h"

Watch_It_Power pwr;

void setup() 
{
  pwr.begin();
}

void loop() 
{
  pwr.isCharging();
  pwr.getBatteryVoltage();
}
