//
//  MyInteger.cpp
//  CS172 Assignment 3
//
//  Created by katie joy shaw on 5/27/14.
//  Copyright (c) 2014 Katie Shaw. All rights reserved.
//

#include "MyInteger.h"
#include <cmath>


MyInteger::MyInteger (int val)
{
    value = val;
}

const int MyInteger::getValue()
{
    return value;
}

bool MyInteger::isEven() const
{
    if (value%2 == 0)
        return true;
    else
        return false;
}
bool MyInteger::isOdd() const
{
    if (value%2 != 0)
        return true;
    else
        return false;
}
bool MyInteger::isPrime() const
{
    for (int i = 2; i < value; i++)
    {
        if(value%i == 0)
            return false;
    }
    
    return true;
}

//statics
bool MyInteger::isEven(int val)
{
    if (val%2 == 0)
        return true;
    else
        return false;
}
bool MyInteger::isOdd(int val)
{
    if (val%2 != 0)
        return true;
    else
        return false;
}
bool MyInteger::isPrime(int val)
{
    for (int i = 2; i < val; i++)
    {
        if(val%i == 0)
            return false;
    }
    
    return true;
}


bool MyInteger::isEven(const MyInteger& val)
{
    if (val.value%2 == 0)
        return true;
    else
        return false;
}
bool MyInteger::isOdd(const MyInteger& val)
{
    if (val.value%2 != 0)
        return true;
    else
        return false;
}
bool MyInteger::isPrime(const MyInteger& val)
{
    for (int i = 2; i < val.value; i++)
    {
        if(val.value%i == 0)
            return false;
    }
    
    return true;
}



bool MyInteger::equals(int val) const
{
    if (val == value)
        return true;
    else
        return false;
}

bool MyInteger::equals (const MyInteger& val) const
{
    return val.value == value;
}



int MyInteger::parseInt (const string& str)
{
    long position = 0;
    char charArray[20];
    int intArray[20];
    int num=0;
    bool negative = false;
    string str2 = str;
    
    if (str.at(0) == '-')
    {
        negative = true;
        str2 = str.substr(1, str.length());
    }
    
    for (int i = 0; i < str2.length(); i++)
    {
        if (position < str2.length())
        {
            charArray[i] = str2.at(i);
        }
    }
    
    for (int i = 0; i < str2.length(); i++)
    {
        if (position < str2.length())
        {
            if (charArray[i] < 48 || charArray[i] > 57)
                return 0;
        }
    }
    for (int i = 0; i < str2.length(); i++)
    {
        intArray[i] = charArray[i];
    }
    
    for (int i = 0; i < str2.length(); i++)
    {
        num = num + ((intArray[i]-48) * pow(10, (str2.length()-i-1)));
    }
    
    if(negative)
        return -num;
    else
        return num;
}


// UML DIAGRAM

////// MyInteger ////////
// + value : int

// + MyInteger (val : int)
// + const getValue() : int
// + const isEven() : bool
// + const isOdd() : bool
// + const isPrime() : bool
// + static isEven(int) : bool
// + static isOdd(int) : bool
// + static isPrime(int) : bool
// + static isEven(const MyInteger&) : bool
// + static isOdd(const MyInteger&) : bool
// + static isPrime(const MyInteger&) : bool
// + const equals(int) : bool
// + const equals(const MyInteger&) : bool
// + static parseInt (const string&) : int