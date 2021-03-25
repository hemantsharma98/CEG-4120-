#include <iostream>
#include "Property.h"
#include "Inventory.h"
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

int main()
{
    Property board[40];
    buildBoard(board);
    cout << board[0].getFourHouse() << endl;
    cout << board[2].getPropName() << endl;

}
