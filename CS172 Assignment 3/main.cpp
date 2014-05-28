/////////////////////////
//  Katie Shaw
//  CS172 Assignment 3
//  5/27/2014
/////////////////////////


#include <iostream>
#include <cmath>
#include <string>
#include "Fan.h"
#include "QuadraticEquation.h"
#include "EvenNumber.h"
#include "MyInteger.h"

using namespace std;

string sort (string & s);
string MIW(bool num); //"makeItWords"



int main()
{
                                        // 9.2 //
    
    
    Fan fan1;
    fan1.setSpeed(3);
    fan1.setRadius(10);
    fan1.setOn(true);
    
    Fan fan2;
    fan2.setSpeed(2);
    fan2.setRadius(5);
    fan2.setOn(false);
    
    cout << "\n\n9.2\n\n";
    cout << "Fan1 has the following settings:\n";
    cout << "Speed = " << fan1.getSpeed() << endl;
    cout << "Radius = " << fan1.getRadius() << endl;
    cout << "On? = " << fan1.getOnOff() << endl;
    
    cout << "\nFan2 has the following settings:\n";
    cout << "Speed = " << fan2.getSpeed() << endl;
    cout << "Radius = " << fan2.getRadius() << endl;
    cout << "On? = " << fan2.getOnOff() << endl;
    
    
                                        // 9.6 //
    
    
    double a, b, c;
    
    cout << "\n\n9.6\n\n";

    cout << "Give values for a, b, and c: \n";
    cin >> a;
    cin >> b;
    cin >> c;
    
    QuadraticEquation quad(a, b, c);
    
    double d = quad.getDiscriminant(); // discriminant
    
    if (d > 0)
    {
        cout << "\nRoot 1: " << quad.getRoot1() << endl;
        cout << "Root 2: " << quad.getRoot2() << endl;
    }
    else if (d == 0)
    {
        cout << "Root is: " << quad.getRoot1() << endl;
    }
    else
    {
        cout << "The equation has no real roots." << endl;
    }
    
    
                                        // 9.11 //
    
    EvenNumber ENobject(16);
    EvenNumber previous;
    EvenNumber next;
    
    previous = ENobject.getPrevious();
    next = ENobject.getNext();
    
    cout << "\n\n9.11\n\n";

    cout << "Number is: " << ENobject.getValue() << endl;
    cout << "Previous value: " << previous.getValue() << endl;
    cout << "Next value: " << next.getValue() << endl;
    
                                        // 10.4 //
    cout << "\n\n10.4\n\n";

    string input;
    string newString;
    
    cout << "What word would you like to sort?" << endl;
    cin >> input;
    cout << "The sorted string is: " << sort(input) << "." << endl;
    
    
                                        // 10.10 //
    cout << "\n\n10.10\n\n";

    
    MyInteger integer1 (13);
    MyInteger integer2 (14);
    MyInteger integer3 (14);
    
    cout << "Testing for integer1 (" << integer1.getValue() << "):\n";
    cout << "Constant set of evens, odds, primes: \n" << "Even? " << MIW(integer1.isEven()) << "\nOdd? " << MIW(integer1.isOdd()) << "\nPrime? " << MIW(integer1.isPrime()) << endl;
    
    cout << "Testing for integer2 (" << integer2.getValue() << "):\n";
    cout << "Constant set of evens, odds, primes: \n" << "Even? " << MIW(integer2.isEven()) << "\nOdd? " << MIW(integer2.isOdd()) << "\nPrime? " << MIW(integer2.isPrime()) << endl;
    
    
    cout << "\nTesting for 5:\n";
    cout << "Static set of evens, odds, primes: \n" << "Even? " << MIW(MyInteger::isEven(5)) << "\nOdd? " << MIW(MyInteger::isOdd(5)) << "\nPrime? " << MIW(MyInteger::isPrime(5)) << endl;
    
    cout << "Testing for 6:\n";
    cout << "Static set of evens, odds, primes: \n" << "Even? " << MIW(MyInteger::isEven(6)) << "\nOdd? " << MIW(MyInteger::isOdd(6)) << "\nPrime? " << MIW(MyInteger::isPrime(6)) << endl;
    
    
    cout << "\nTesting for integer1 (" << integer1.getValue() << "):\n";
    cout << "Static set of evens, odds, primes: \n" << "Even? " << MIW(MyInteger::isEven(integer1)) << "\nOdd? " << MIW(MyInteger::isOdd(integer1)) << "\nPrime? " << MIW(MyInteger::isPrime(integer1)) << endl;
    
    cout << "Testing for integer2 (" << integer2.getValue() << "):\n";
    cout << "Constant set of evens, odds, primes: \n" << "Even? " << MIW(MyInteger::isEven(integer2)) << "\nOdd? " << MIW(MyInteger::isOdd(integer2)) << "\nPrime? " << MIW(MyInteger::isPrime(integer2)) << endl;
    
    int testint = 13;
    cout << "\nIs an object equal to an int?\n";
    cout << integer1.getValue() << " & " << testint << "? " << MIW(integer1.equals(testint)) << endl;
    
    cout << "\nAre two objects eqaul?\n";
    cout << integer1.getValue() << " & " << integer2.getValue() << "? " << MIW(integer1.equals(integer2)) << endl;
    
    
    string str;
    cout << "\nPlease enter a string number that I will skillfully turn into an int.\n";
    cin >> str;
    cout << "Here you are!: " << MyInteger::parseInt(str) << endl;
    
}


                                        // 10.4 //
string sort (string & s)
{
    char temp; // stores chars while swapping
    bool changed = true;
    do
    {
        changed = false;
        for (int j = 0; j < s.length() - 1; j++)
            if (s.at(j) > s.at(j+1))
            {
                temp = s.at(j);
                s.at(j) = s.at(j+1);
                s.at(j+1) = temp;
                changed = true;
            }
    } while (changed);
    return s;
}

                                    // For 10.10 //

string MIW(bool num) //"makeItWords"
{
    if (num)
        return "true";
    else
        return "false";
}
