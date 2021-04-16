#include <iostream>
#include "Property.h"
#include "Inventory.h"
#include <fstream>
#include <sstream>
#include <string>
#include <random>
using std::cout;
using std::cin;
using namespace std;

void buildBoard(Property board[40]) {
    ifstream file("boarddata.txt");
    Property tmp = Property();

    string str;
    string pName;
    int pRent;
    int pOne;
    int pTwo;
    int pThree;
    int pFour;
    int pWHotel;
    int pMortgage;
    int pHouseCost;
    int pHotelCost;

    
    for (int i = 0; i < 40; i++) {
        
        getline(file, pName, ',');

        file >> pRent;
        file >> pOne;
        file >> pTwo;
        file >> pThree;
        file >> pFour;
        file >> pWHotel;
        file >> pMortgage;
        file >> pHouseCost;
        file >> pHotelCost;
        file.ignore(1000, '\n');


        tmp.setPropName(pName);
        tmp.setRent(pRent);
        tmp.setOneHouse(pOne);
        tmp.setTwoHouse(pTwo);
        tmp.setThreeHouse(pThree);
        tmp.setFourHouse(pFour);
        tmp.setWithHotel(pWHotel);
        tmp.setMortgageVal(pMortgage);
        tmp.setHouseCost(pHouseCost);
        tmp.setHotelCost(pHotelCost);

        board[i] = tmp;
    }


    
}

class Player {
public:
    Inventory inv = Inventory();
    Property owned[30];
    
    Player() {
        inv.setLoc(0);
        inv.setpID(1);
        inv.addMoney(2500);
    }
};

int generateOneThruSix() {
    random_device rd; //Obtain random number from hardware
    mt19937 gen(rd()); // seed the generator
    uniform_int_distribution<> distr(1, 6); // define the range

    return distr(gen);
}

bool isDouble(int d1, int d2) {
    return d1 == d2;
}

void movePlayer(Player p) {
    int d1 = generateOneThruSix();
    int d2 = generateOneThruSix();
    cout << d1 << " " << d2 << endl;
    cout << p.inv.getLoc() << endl;
    p.inv.setLoc(d1 + d2);
    cout << p.inv.getLoc() << endl;
}

int main()
{
    Property board[40];
    buildBoard(board);
    for (int i = 0; i < 40; i++) {
        board[i].printAll();
    }


    
}
