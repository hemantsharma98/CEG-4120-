#include <iostream>
#include <vector>
using namespace std;

class Property {
    string propName;
    int rent;
    int oneHouse;
    int twoHouse;
    int threeHouse;
    int fourHouse;
    int withHotel;
    int mortgageVal;
    int houseCost;
    int hotelCost;
    bool ownFour = false;

public: 
    string getPropName();
    int getRent();
    int getOneHouse();
    int getTwoHouse();
    int getThreeHouse();
    int getFourHouse();
    int getWithHotel();
    int getMortgageVal();
    int getHouseCost();
    int getHotelCost();
    void setPropName(string name);
    void setRent(int money);
    void setOneHouse(int money);
    void setTwoHouse(int money);
    void setThreeHouse(int money);
    void setFourHouse(int money);
    void setWithHotel(int money);
    void setMortgageVal(int money);
    void setHouseCost(int money);
    void setHotelCost(int money);
    void setOwnFour(bool own);
    bool getOwnFour();
}; 

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


class Inventory {
    friend class Property;
public:
    int money;
    vector<Property> properties;
    int getMoney();
    void addMoney(int m);
    void subMoney(int m);

    void addProp(Property p);
    void removeProp(string n);
    void printAll();

};

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

void Inventory::addProp(Property p)
{
    properties.push_back(p);
}

void Inventory::removeProp(string n)
{
    int i = 0;
    bool notFound = true;

    while (notFound and properties.size() > i) {
        if (properties[i].getPropName() == n) {
            cout << "deleting: " << properties[i].getPropName() << endl;
            properties.erase (properties.begin() + (i -1));
            notFound = false;
        }
        else {
            i += 1;
        }
    }

}

void Inventory::printAll()
{
    for (int i = 0; i < properties.size(); i++) {
        cout << ' ' << properties[i].getPropName() << endl;
    }
}

int main()
{
    
    Property p1 = Property();
    p1.setPropName("North Ave");
    p1.setRent(12);
    p1.setOneHouse(60);
    p1.setTwoHouse(180);
    p1.setThreeHouse(500);
    p1.setFourHouse(700);
    p1.setWithHotel(900);
    p1.setMortgageVal(80);
    p1.setHouseCost(100);
    p1.setHotelCost(100);
    p1.setOwnFour(false);

    Property p2 = Property();
    p2.setPropName("East Ave");

    Property p3 = Property();
    p3.setPropName("South Ave");



    Inventory i = Inventory();

    i.addProp(p1);
    i.addProp(p2);
    i.addProp(p3);
    i.printAll();

    i.removeProp(p3.getPropName());

    i.printAll();

}


