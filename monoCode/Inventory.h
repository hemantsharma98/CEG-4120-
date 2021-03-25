#include <iostream>
using namespace std;

class Inventory {
    friend class Property;
public:
    int money;
    int getMoney();
    void addMoney(int m);
    void subMoney(int m);
};





