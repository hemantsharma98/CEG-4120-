#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
#include "player.cpp"
#include <stdlib.h>
#include<time.h>
using namespace std;

int board[40];

int diceRoll()
{
  srand(time(0));
  int call=rand()%12 ;
  return call+1;
}

int main()
{
//cout<<diceRoll()<<endl;
Player p ;
cout<<p.getPerson()<<endl;
cout<<p.isPropertyOwned(1)<<endl;
p.giveMoney(200);
cout<<p.getBalance()<<endl;
p.setLocation(diceRoll());
cout<<p.getLocation()<<endl;

}
