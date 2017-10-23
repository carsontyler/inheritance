// File: Student
// Created by Carson Tyler on 10/22/2017 for CS1410.
// Copyright ©2017 WSU
#ifndef INHERITANCE_STUDENT_H
#define INHERITANCE_STUDENT_H

#include <iostream>
using namespace std;

class Student
{
private:
    string school;
    string degree;
public:
    void setEducation();
    void getEducation();
};


#endif //INHERITANCE_STUDENT_H
