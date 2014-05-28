//
//  QuadraticEquation.h
//  CS172 Assignment 3
//
//  Created by katie joy shaw on 5/26/14.
//  Copyright (c) 2014 Katie Shaw. All rights reserved.
//

#ifndef CS172_Assignment_3_QuadraticEquation_h
#define CS172_Assignment_3_QuadraticEquation_h


class QuadraticEquation
{
private:
    int a; //data fields for coefficients
    int b;
    int c;
    
public:

    QuadraticEquation (int A, int B, int C); // Constructor
    
    // accessors (get functions for a, b, and c)
    double getA();
    double getB();
    double getC();
    
    double getDiscriminant(); // b^2 - 4ac
    
    double getRoot1();
    double getRoot2();
};



#endif
