// File: testDistance
// Created by Carson Tyler on 10/17/2017 for CS1410.
// Copyright ©2017 WSU
#include <iostream>
#include <string>
#include "Distance.h"

using namespace std;

// Main Program
int main()
{
    Distance d1, d2;
    cout << d1 << endl;

    d1.setFeet(2);
    d1.setInches(3.5);
    cout << d1 << endl;

    if(d1 == d2)
    {
        cout << "The same" << endl;
    }

    DistSign alpha;
    cout << alpha << endl;

    cout << "Done" << endl;

    return 0;

}
// Function Definitions