//
//  Fan.cpp
//  CS172 Assignment 3
//
//  Created by katie joy shaw on 5/26/14.
//  Copyright (c) 2014 Katie Shaw. All rights reserved.
//

#include "Fan.h"


// No-argument constructor
Fan::Fan ()
{
    speed = 1;
    radius = 5;
    on = false;
}

// accessors
int Fan::getSpeed()
    {
        return speed;
    }
bool Fan::getOnOff()
    {
        return on;
    }
double Fan::getRadius()
    {
        return radius;
    }

// mutators
void Fan::setSpeed(int newSpeed)
{
    if (speed < 1)
        speed = 1;
    else if (speed > 3)
        speed = 3;
    else
        speed = newSpeed;
}
void Fan::setOn (bool newOnOff) {on = newOnOff;}
void Fan::setRadius (double newRadius) {radius = newRadius;}


// UML DIAGRAM

////// Fan ////////
// + speed : int
// + on : bool
// + radius : double

// + Fan ()
// + getSpeed()
// + getOnOff()
// + getRadius()
// + setSpeed(newSpeed : int)
// + setOn (newOnOff : bool)
// + setRadius (newRadius : double)