//
//  EvenNumber.h
//  CS172 Assignment 3
//
//  Created by katie joy shaw on 5/26/14.
//  Copyright (c) 2014 Katie Shaw. All rights reserved.
//

#ifndef CS172_Assignment_3_EvenNumber_h
#define CS172_Assignment_3_EvenNumber_h

class EvenNumber
{
private:
    int value; //data field (integer value stored in the object)
    
public:
    
    EvenNumber (); // No-Arg Constructor
    EvenNumber (int aValue);
    
    // accessors (get functions)
    int getValue();
    EvenNumber getNext(); // Next even number after the current even number in this object
    EvenNumber getPrevious(); // Previous even number before the current even number in this object
    
};

#endif
