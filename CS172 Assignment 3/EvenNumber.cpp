//
//  EvenNumber.cpp
//  CS172 Assignment 3
//
//  Created by katie joy shaw on 5/26/14.
//  Copyright (c) 2014 Katie Shaw. All rights reserved.
//

#include "EvenNumber.h"
#include <cmath>


EvenNumber::EvenNumber ()
{
    value = 0;
}

EvenNumber::EvenNumber (int aValue)
{
    value = aValue;
}

int EvenNumber::getValue()
{
    return value;
}

EvenNumber EvenNumber::getNext()
{
    EvenNumber en(value + 2);
    return en;
}

EvenNumber EvenNumber::getPrevious()
{
    EvenNumber en(value - 2);
    return en;
}



// UML DIAGRAM

////// EvenNumber ////////
// + value : int

// + EvenNumber ()
// + EvenNumber (aValue : int)
// + getValue() : int
// + getNext() : EvenNumber
// + getPrevious() : EvenNumber
