// File: Manager
// Created by Carson Tyler on 10/22/2017 for CS1410.
// Copyright ©2017 WSU
#ifndef INHERITANCE_MANAGER_H
#define INHERITANCE_MANAGER_H

#include "Employee.h"
#include "Student.h"

class Manager : private Employee, private Student
{
private:
    string title;
    double dues;
public:
    void setData();

    void getData();

};


#endif //INHERITANCE_MANAGER_H
