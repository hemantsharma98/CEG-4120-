#include <iostream>
#include <vector>
using namespace std;

class Property {
    string propName;
    int owner = 0;
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
    int getOwner();
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
    void setOwner(int pID);
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