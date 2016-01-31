/*
  Oliver Thompson
  Homework 1
  Thermostat.cpp
*/

#include <string>
#include "Thermostat.h"
#include "Room.h"
#include "Air_conditioner.h"

using namespace std;

Thermostat::Thermostat(string roomName)
{
  name = roomName;

  //Defaults the setting to 65
  setting = 65;

  //Creates an air conditioner associated with the thermostat
  what_it_controls = new Air_conditioner(name);

  what_it_controls->location = this;
}

Thermostat::~Thermostat()
{
  //Deletes the air contitioner
  delete what_it_controls;
}

string Thermostat::Get_name()
{
  return name;
}

int Thermostat::Get_setting()
{
  return setting;
}

void Thermostat::Change_setting(int set)
{
  //Sets the thermostat to the given parameter and checks if the
  // air conditioner should be turned on	
  setting = set;
  Check_temp();

  return;
}

void Thermostat::Check_temp()
{

  //Turns on the air conditioner if the setting is lower than the room's
  // temperature
  if(location->Get_temp() > setting)
  {
    what_it_controls->Turn_on();
  }

  else
  {
    what_it_controls->Turn_off();
  }

  return;
}

