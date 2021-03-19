#include <iostream>
//#include <bits/stdc++.h>
#include <string.h>
#include "player.cpp"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;

int board[40];

int diceRoll(void)
{
  srand(time(0));
  int call = rand()%12;
  srand((unsigned int)time(NULL));
  return call+1;
}

int main()
{
//cout<<diceRoll()<<endl;
Player p ;
std::cout<<p.getPerson()<<endl;
std::cout<<p.isPropertyOwned(1)<<endl;
p.giveMoney(200);
std::cout<<p.getBalance()<<endl;
p.setLocation(diceRoll());
std::cout<<p.getLocation()<<endl;

}
