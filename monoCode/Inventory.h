#include <iostream>
using namespace std;

class Inventory {
public:
    int pID;
    int money;
    int loc;
    int numPropOwned;
    int getMoney();
    void addMoney(int m);
    void subMoney(int m);
    int getpID();
    void setpID(int p);
    int getLoc();
    void setLoc(int l);
    int getNumPropOwned();
    void setNumPropOwned(int n);
    void numPropPlusOne();
    void numPropMinusOne();
};





