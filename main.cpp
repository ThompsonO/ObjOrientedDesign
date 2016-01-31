/*
  Oliver Thompson
  Homework 1
  main.cpp
*/

#include "Room.cpp"
#include "Thermostat.cpp"
#include "Air_conditioner.cpp"

using namespace std;

int main()
{
  //Creates the room
  Room room_400("room 400");

  cout << "Initial setting: " << endl;
  cout << "Room: " << room_400.Get_name() << " Temp: " << room_400.Get_temp()
       << endl << "Thermostat setting: " 
       << room_400.thermostat_in_room->Get_setting() << endl << endl;

  //Increases the room's temperature by 5
  cout << "Room Increased by 5: " << endl;
  room_400.Change_temp(5);

  cout << "Room: " << room_400.Get_name() << " Temp: " << room_400.Get_temp()
       << endl << "Thermostat setting: " 
       << room_400.thermostat_in_room->Get_setting() << endl << endl;

  //Changes the thermostat to 60
  cout << "Thermostat changed to 60: " << endl;
  room_400.thermostat_in_room->Change_setting(60);

  cout << "Room: " << room_400.Get_name() << " Temp: " << room_400.Get_temp()
       << endl << "Thermostat setting: " 
       << room_400.thermostat_in_room->Get_setting() << endl << endl;

  //Decreases the room's temperature by 5
  cout << "Room Decreased by 5: " << endl;
  room_400.Change_temp(-5);

  cout << "Room: " << room_400.Get_name() << " Temp: " << room_400.Get_temp()
       << endl << "Thermostat setting: " 
       << room_400.thermostat_in_room->Get_setting() << endl << endl;

  return 0;
}

