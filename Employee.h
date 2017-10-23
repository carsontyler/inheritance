#ifndef INHERITANCE_EMPLOYEE_H
#define INHERITANCE_EMPLOYEE_H

#include <iostream>
using namespace std;

class Employee
{
private:
    string name;                // Employee name
    unsigned long number;       // Employee ID
public:
    void setData();
    void getData();
};

#endif