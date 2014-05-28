//
//  MyInteger.h
//  CS172 Assignment 3
//
//  Created by katie joy shaw on 5/27/14.
//  Copyright (c) 2014 Katie Shaw. All rights reserved.
//
#include <string>
using namespace std;
#ifndef CS172_Assignment_3_MyInteger_h
#define CS172_Assignment_3_MyInteger_h

class MyInteger
{
private:
    int value; // data field

public:
    MyInteger(int val); // creates a MyInteger ovject for the specified value
    
    // Constants will not allow changes to underlying variables
    
    const int getValue(); // constant get function that returns the int value
    
    //constants - prevents from changin instance variables
    bool isEven()const; // return true if value is... even
    bool isOdd()const; // ... odd
    bool isPrime()const; // ... prime
    
    //statics - makes it a class level
    static bool isEven(int); // return true if value is... even
    static bool isOdd(int); // ... odd
    static bool isPrime(int); // ... prime
    
    static bool isEven(const MyInteger&); // return true if value is... even
    static bool isOdd(const MyInteger&); // ... odd
    static bool isPrime(const MyInteger&); // ... prime
    
    bool equals(int) const;
    bool equals (const MyInteger&) const;
    
    static int parseInt (const string&);
};


#endif
