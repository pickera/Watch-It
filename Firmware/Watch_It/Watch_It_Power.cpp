#include "Watch_It_Power.h"


const uint8_t chrgPin = 27;
const uint8_t battPin = A4;
const uint8_t gpsPwrPin = 2;
const uint16_t VDD = 3300;
const uint16_t adcResolution = 1023;

Watch_It_Power::Watch_It_Power()
{ 
}

void Watch_It_Power::begin()
{
  pinMode(chrgPin,INPUT); 
  pinMode(gpsPwrPin,OUTPUT);   
}

//Returns whether or not the battery is charging
bool Watch_It_Power::isCharging()
{
  return !digitalRead(chrgPin); //return 0 if charging, 1 if not charging
}

uint16_t Watch_It_Power::getBatteryVoltage()
{
  uint16_t val = analogRead(battPin); //10-bit ADC, will return a number bew=tween 0 (0V) and 1023 (3.3V)
  uint16_t voltage = VDD*(val/float(adcResolution));

  return 2*voltage;
}

void Watch_It_Power::enableGPS()
{ 
  digitalWrite(gpsPwrPin,HIGH); //enables regulator, turning ON GPS circuit
}

void Watch_It_Power::disableGPS()
{ 
  digitalWrite(gpsPwrPin,LOW); //disables regulator, turning OFF GPS circuit
}

void Watch_It_Power::enableMP3()
{  
}

void Watch_It_Power::disableMP3()
{  
}
