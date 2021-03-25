#include "Property.h"
#include <iostream>
#include <vector>
using namespace std;

string Property::getPropName()
{
    return propName;
}

int Property::getRent()
{
    return rent;
}

int Property::getOneHouse()
{
    return oneHouse;
}

int Property::getTwoHouse()
{
    return twoHouse;
}

int Property::getThreeHouse()
{
    return threeHouse;
}

int Property::getFourHouse()
{
    return fourHouse;
}

int Property::getWithHotel()
{
    return withHotel;
}

int Property::getMortgageVal()
{
    return mortgageVal;
}

int Property::getHouseCost()
{
    return houseCost;
}

int Property::getHotelCost()
{
    return hotelCost;
}

void Property::setPropName(string name)
{
    propName = name;
}

void Property::setRent(int money)
{
    rent = money;
}

void Property::setOneHouse(int money)
{
    oneHouse = money;
}

void Property::setTwoHouse(int money)
{
    twoHouse = money;
}

void Property::setThreeHouse(int money)
{
    threeHouse = money;
}

void Property::setFourHouse(int money)
{
    fourHouse = money;
}

void Property::setWithHotel(int money)
{
    withHotel = money;
}

void Property::setMortgageVal(int money)
{
    mortgageVal = money;
}

void Property::setHouseCost(int money)
{
    houseCost = money;
}

void Property::setHotelCost(int money)
{
    hotelCost = money;
}

void Property::setOwnFour(bool own)
{
    ownFour = own;
}

bool Property::getOwnFour()
{
    return ownFour;
}
