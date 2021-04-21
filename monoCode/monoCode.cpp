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

void movePlayer(Player &p) {
    int d1 = generateOneThruSix();
    int d2 = generateOneThruSix();
    cout << "Die one: " << d1 << " Die two is: " << d2 << endl;
    //add rerolls for doubles
    if (p.inv.getLoc() + (d1 + d2) < 40) {
        p.inv.setLoc(p.inv.getLoc() + (d1 + d2));
    }
    else {
        p.inv.setLoc(p.inv.getLoc() + (d1 + d2) - 40);
    }
}

int main()
{
    Property board[40];
    buildBoard(board);
    //prints all board spaces to show functionality
    //for (int i = 0; i < 40; i++) {
     //   board[i].printAll();
    //}

    Player p1;
    p1.inv.setpID(1);

    bool gameRun = true;
    while (gameRun == true) {
        cout << "Player location index is: " << p1.inv.getLoc() << endl;
        cout << "Player is on: " << board[p1.inv.getLoc()].getPropName() << endl;

        cout << "Press 1 to look at your inventory, 2 to move your character, 3 buy the property, 0 to quit \n";
        int choice;
        cin >> choice;

        switch (choice) {
        case 0:
            gameRun = false;
            break;
        case 1:
            cout << "Player ID: " << p1.inv.getpID() << " Player money: " << p1.inv.getMoney() << endl;
            if (p1.inv.getNumPropOwned() == 0) {
                cout << "This player owns no properties. " << endl;
            }
            else {
                cout << "Player owns: " << endl;
                for (int i = 0; i < p1.inv.getNumPropOwned(); i++) {
                    cout << p1.owned[i].getPropName() << endl;
                }
            }
            break;
        case 2:
            movePlayer(p1);
            break;
        case 3:
            cout << "Would you like to buy: " << board[p1.inv.getLoc()].getPropName() << " for: " << board[p1.inv.getLoc()].getOneHouse() << " ?" << endl;
            cout << "Enter 1 for yes or 0 for no" << endl;
            int willBuy;
            cin >> willBuy;
            if (willBuy == 1) {
                if (p1.inv.money >= board[p1.inv.getLoc()].getOneHouse()) {
                    p1.owned[p1.inv.getNumPropOwned()] = board[p1.inv.getLoc()];
                    p1.inv.numPropPlusOne();
                    p1.inv.money = p1.inv.money - board[p1.inv.getLoc()].getOneHouse();
                    cout << "Property bought! " << endl;
                }
            }
            else {
                "You've chosen not to buy this property. It will now go up for auction. ";
            }
            break;
        default:
            cout << "Press 1 to look at your inventory, 2 to move your character, 3 buy the property \n";
        }
        cout << "\n";
    }
}
