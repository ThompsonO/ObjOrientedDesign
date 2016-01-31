/*
  Oliver Thompson
  Homework 1
  Room.h
*/


#ifndef ROOM_H
#define ROOM_H

#include <string>
#include "Thermostat.h"

using namespace std;

class Thermostat;

class Room
{
  public:
    Room(string roomName);
    ~Room();

    string Get_name();
    int Get_temp();
    void Set_temp(int temp);

    //Changes the room's temperature by the amount given in the parameter
    void Change_temp(int temp);

    //The thermostat associated with the room
    Thermostat* thermostat_in_room;

  private:
    string name;
    int temperature;
};

#endif
