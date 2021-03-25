#include "Inventory.h"
#include <iostream>
#include "Property.h"
using namespace std;

int Inventory::getMoney()
{
    return money;
}

void Inventory::addMoney(int m)
{
    money += m;
}

void Inventory::subMoney(int m)
{
    money -= m;
}
