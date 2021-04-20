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

int Inventory::getNumPropOwned()
{
    return numPropOwned;
}

void Inventory::setNumPropOwned(int n)
{
    numPropOwned = n;
}

void Inventory::numPropPlusOne()
{
    numPropOwned += 1;
}

void Inventory::numPropMinusOne()
{
    numPropOwned -= 1;
}
