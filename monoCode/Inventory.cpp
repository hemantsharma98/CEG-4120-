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

int Inventory::getpID()
{
    return pID;
}

void Inventory::setpID(int p)
{
    pID = p;
}

int Inventory::getLoc()
{
    return loc;
}

void Inventory::setLoc(int l)
{
    loc = l;
}
