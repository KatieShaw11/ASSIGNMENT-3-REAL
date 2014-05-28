//
//  Fan.h
//  CS172 Assignment 3
//
//  Created by katie joy shaw on 5/26/14.
//  Copyright (c) 2014 Katie Shaw. All rights reserved.
//

#ifndef CS172_Assignment_3_Fan_h
#define CS172_Assignment_3_Fan_h


class Fan
{
private:
    int speed; // data field; speed of fan
    bool on; // data field; specifies the speed of the fan
    double radius; // data field that specifies the radius of the fan
    
public:
    // No-argument constructor
    Fan ();
    
    // accessors
    int getSpeed();
    bool getOnOff();
    double getRadius();
    
    // mutators
    void setSpeed(int newSpeed);
    void setOn (bool newOnOff);
    void setRadius (double newRadius);
};


#endif
