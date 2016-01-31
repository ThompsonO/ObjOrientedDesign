/*
  Oliver Thompson
  Homework 1
  Room.cpp
*/

#include <string>
#include "Room.h"
#include "Thermostat.h"

using namespace std;

Room::Room(string location)
{
  name = location;

  //Initializes the room's temperature to 65
  temperature = 65;

  //Creates a new thermostat associated with the room
  thermostat_in_room = new Thermostat(name);

  thermostat_in_room->location = this;
}

Room::~Room()
{
  delete thermostat_in_room;
}

string Room::Get_name()
{
  return name;
}

int Room::Get_temp()
{
  return temperature;
}

void Room::Set_temp(int temp)
{
  temperature = temp;
}

void Room::Change_temp(int temp)
{
  //Adds the parameter to the room's temperature
  temperature = temperature + temp;

  //Checks if the thermostat should activate the air conditioner given
  // the new temperature
  thermostat_in_room->Check_temp();
}

