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

int Property::getOwner()
{
    return owner;
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

void Property::setOwner(int pID)
{
    owner = pID;
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

void Property::printAll() {
    cout << "Name: " << propName << "\n" <<
        "Rent: " << rent << "\n" <<
        "One House Cost: " << oneHouse << "\n" <<
        "Two Houses Cost: " << twoHouse << "\n" <<
        "Three Houses Cost: " << threeHouse << "\n" <<
        "Four Houses Cost: " << fourHouse << "\n" <<
        "Cost with Hotel: " << hotelCost << "\n" <<
        "Mortgage: " << mortgageVal << "\n" <<
        "House Cost: " << houseCost << "\n" <<
        "Hotel Cost: " << hotelCost << "\n" << endl;

}
