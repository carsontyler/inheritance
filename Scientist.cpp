// Created by Carson Tyler on 10/22/2017 for CS1410.
// Copyright ©2017 WSU
#include "Scientist.h"

void Scientist::setData()
{
    Employee::setData();
    cout << "\nEnter the number of pubs: ";
    cin >> pubs;
}

void Scientist::getData()
{
    Employee::getData();
    cout << "\nNumber of publications: " << pubs;
}
