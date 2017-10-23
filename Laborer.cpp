// Created by Carson Tyler on 10/22/2017 for CS1410.
// Copyright ©2017 WSU
#include "Laborer.h"

void Foreman::setData()
{
    Laborer::setData();
    cout << "\nEnter Quotas: ";
    cin >> quotas;
}

void Foreman::getData()
{
    Laborer::getData();
    cout << "\nQuotas: " << quotas;

}
