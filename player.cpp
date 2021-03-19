#include <iostream>
//#include <bits/stdc++.h>
#include <string.h>
//#include <stdlib.h>

//board[0] represents 'GO' location of the board
using namespace std;

class Player
{ static int pid;
  int number ;
  int balance= 2500;
  public :
  int  location;
  bool ownedProperties[40];
  Player ()
  {
    pid++;
    number=pid;
    location=0;
    for(int i = 0; i < 40; i++){
  		ownedProperties[i] = false;
  	}
  }

  void setLocation(int loc)
  {
    location=loc;
  }
  int  getLocation()
  {
    return location;
  }
  int getPerson()
  {
    return number;
  }
  int getBalance()
  {
    return balance;
  }
  void giveMoney(int amount)
  {
     balance-=amount;
  }
  void takeMoney(int amount)
  {
     balance+=amount;
  }
  bool isPropertyOwned(int index)
  {
    return ownedProperties[index];
  }
  void ownProperty(int index)
  {
    ownedProperties[index]=true;
  }


};
//int Player::pid=0;
