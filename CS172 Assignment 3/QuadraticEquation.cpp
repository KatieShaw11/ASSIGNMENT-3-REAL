//
//  QuadraticEquation.cpp
//  CS172 Assignment 3
//
//  Created by katie joy shaw on 5/26/14.
//  Copyright (c) 2014 Katie Shaw. All rights reserved.
//

#include "QuadraticEquation.h"
#include <cmath>

QuadraticEquation::QuadraticEquation (int A, int B, int C)
{
    a = A;
    b = B;
    c = C;
}

// accessors (get functions for a, b, and c)
double QuadraticEquation::getA()
{return a;}
double QuadraticEquation::getB()
{return b;}
double QuadraticEquation::getC()
{return c;}

double QuadraticEquation::getDiscriminant()
{
    return (b*b) - (4*a*c);
}

double QuadraticEquation::getRoot1()
{
    
    if (getDiscriminant() < 0)
        return 0;
    else
        return ((-b)+ sqrt(getDiscriminant()) )/(2*a);
}
double QuadraticEquation::getRoot2()
{
    if (getDiscriminant() < 0)
        return 0;
    else
        return ((-b)- sqrt(getDiscriminant()))/(2*a);
}



// UML DIAGRAM

////// QUADRATIC EQUATION ////////
// + a : double
// + b : double
// + c : double

// + QuadraticEquation (A : int, B : int, C : int)
// + getA() : double
// + getB() : double
// + getC() : double
// + getDiscriminant() : double
// + getRoot1() : double
// + getRoot2() : double