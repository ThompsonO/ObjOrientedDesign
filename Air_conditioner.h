/*
  Oliver Thompson
  Homework 1
  Air_conditioner.h
*/

#ifndef AIR_CONDITIONER_H
#define AIR_CONDITIONER_H

#include <iostream>
#include <string>
#include "Thermostat.h"

using namespace std;

class Thermostat;

class Air_conditioner
{
  public:
    Air_conditioner(string roomName);
    ~Air_conditioner();

    string Get_name();

    //Activates the air conditioner
    void Turn_on();

    //Turns off the air conditioner
    void Turn_off();

    Thermostat* location;

  private:
    string name;
    bool state;    
};

#endif

