/*
  Oliver Thompson
  Homework 1
  Thermostat.h
*/


#ifndef THERMOSTAT_H
#define THERMOSTAT_H

#include <string>
#include "Room.h"
#include "Air_conditioner.h"

using namespace std;

class Room;
class Air_conditioner;

class Thermostat
{
  public:
    Thermostat(string roomName);
    ~Thermostat();

    //Returns the thermostat's name
    string Get_name();

    //Returns the thermostat's setting
    int Get_setting();

    //Sets the thermostat to the parameter set
    void Change_setting(int set);

    //Turns on or off the air conditioner if the room's temperature
    // is greater than the thermostat's setting
    void Check_temp();

    Room* location;

  private:
    string name;
    Air_conditioner* what_it_controls;
    int setting;
};

#endif
