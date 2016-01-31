/*
  Oliver Thompson
  Homework 1
  Air_conditioner.cpp
*/

#include <iostream>
#include <string>
#include "Air_conditioner.h"
#include "Thermostat.h"

using namespace std;

Air_conditioner::Air_conditioner(string roomName)
{
  name = roomName;
  state = false;
}

Air_conditioner::~Air_conditioner()
{
}

string Air_conditioner::Get_name()
{
  return name;
}

void Air_conditioner::Turn_on()
{
  //Turns the air conditioner on
  if(state == false)
  {
    state = true;
  }

  cout << "The air conditioner is on" << endl;

  //Decreases the room's temperature
  location->location->Set_temp((location->location->Get_temp())-1);

  return;
}

void Air_conditioner::Turn_off()
{
  //Turns the air conditioner off
  if(state == true)
  {
    state = false;
  }

  cout << "The air conditioner is off" << endl;

  return;
}

