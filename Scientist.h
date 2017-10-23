// File: Scientist
// Created by Carson Tyler on 10/22/2017 for CS1410.
// Copyright ©2017 WSU
#ifndef INHERITANCE_SCIENTIST_H
#define INHERITANCE_SCIENTIST_H


#include "Employee.h"

class Scientist : public Employee
{
private:
    int pubs;
public:
    void setData();
    void getData();

};


#endif //INHERITANCE_SCIENTIST_H
