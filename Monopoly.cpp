// Monopoly.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


//void buildBoard() {
//    int board[40]{ 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40 };
//
//    std::cout << board[1] << std::endl;
//
//}

class space 
{
    string name;
    string spaceType;
    bool owned;

public:
    string getName();
    void setName(string n);

    string getSpaceType();
    void setSpaceType(string t);

    bool getowned();
    void setowned(bool f);
};

string space::getName()
{
    return name;
}

void space::setName(string n)
{
    name = n;
}

string space::getSpaceType()
{
    return spaceType;
}

void space::setSpaceType(string t)
{
    spaceType = t;
}

bool space::getowned()
{
    return owned;
}

void space::setowned(bool f)
{
    owned = f;
}

class GameBoard
{
public:
	GameBoard();

    void buildBoard();

    //int space;


	~GameBoard();

private:

};

GameBoard::GameBoard()
{
}

GameBoard::~GameBoard()
{
}

void GameBoard::buildBoard()
{
    space one;
    space two;

    space board[40];



    cout << board << std::endl;
}



int main()
{
    std::cout << "Hello World!\n";

    GameBoard b;

    b.buildBoard();
    

}