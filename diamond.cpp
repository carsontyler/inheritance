// Created by Carson Tyler on 10/22/2017 for CS1410.
// Copyright ©2017 WSU
#include <iostream>
#include <string>
using namespace std;

// Constants, Structs, Classes
class A
{
public:
    void func();
};

class B: public A
{
};

class C: public A
{
};

class D: public B, public C
{
};
//Prototypes

// Main Program
int main()
{
    D objD;
    //objD.func(); // Ambiguous. Won't ocmpile
    
    return 0;
}
// Function Definitions