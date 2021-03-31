#include <iostream>
using namespace std;

class Inventory {
public:
    int pID;
    int money;
    int loc;
    int getMoney();
    void addMoney(int m);
    void subMoney(int m);
    int getpID();
    void setpID(int p);
    int getLoc();
    void setLoc(int l);
};





