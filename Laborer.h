// File: Laborer
// Created by Carson Tyler on 10/22/2017 for CS1410.
// Copyright ©2017 WSU
#ifndef INHERITANCE_LABORER_H
#define INHERITANCE_LABORER_H

#include "Employee.h"

class Laborer : public Employee
{

};

class Foreman: public Laborer
{
private:
    float quotas;
public:
    void setData();
    void getData();
};


#endif //INHERITANCE_LABORER_H
