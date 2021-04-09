#include <iostream>
#include "Property.h"
#include "Inventory.h"
#include <random>
using namespace std;

void buildBoard(Property board[40]) {
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

    board[0] = p1;
    board[1] = p2;
    board[2] = p3;

    //need to either hardcode the data or use a loop and read it from a file. the latter would be better
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

    Player player1 = Player();

    movePlayer(player1);
}
