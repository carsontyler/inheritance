// Created by Carson Tyler on 10/22/2017 for CS1410.
// Copyright ©2017 WSU
#include <iostream>
#include <string>
using namespace std;

// Constants, Structs, Classes
class A
{
public:
    void Show();
};
void A::Show()
{
    cout << "Class A\n";
}

class B
{
public:
    void Show();
};
void B::Show()
{
    cout << "Class B";
}

class C: public A, public B
{
};
//Prototypes

// Main Program
int main()
{
    C objC;
    //objC.Show();
    objC.A::Show();
    objC.B::Show();

    
    return 0;
}
// Function Definitions