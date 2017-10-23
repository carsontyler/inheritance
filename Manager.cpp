// Created by Carson Tyler on 10/22/2017 for CS1410.
// Copyright ©2017 WSU
#include "Manager.h"

void Manager::setData()
{
    Employee::setData();
    cout << "\nEnter your title: ";
    cin >> title;
    cin.ignore();
    cout << "\nEnter golf club dues: ";
    cin >> dues;
    Student::setEducation();
}

void Manager::getData()
{
    Employee::getData();
    cout << "\nTitle: " << title;
    cout << "\nGolf Dues: " << dues;
    Student::getEducation();
}
