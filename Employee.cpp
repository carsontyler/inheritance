#include "Employee.h"

void Employee::setData()
{
    cout << "\nEnter last name: ";
    cin >> name;
    cin.ignore();
    cout << "\nEnter ID Number: ";
    cin >> number;
}

void Employee::getData()
{
    cout << "\nName: " << name;
    cout << "\nID Number: " << number;
}
