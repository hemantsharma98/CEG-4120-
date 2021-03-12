#include <iostream>
#include <time.h>
#include <random>

using namespace std;

//https://stackoverflow.com/questions/7560114/random-number-c-in-some-range

int generateOneThruSix() {
    random_device rd; //Obtain random number from hardware
    mt19937 gen(rd()); // seed the generator
    uniform_int_distribution<> distr(1, 6); // define the range

    return distr(gen);
}

bool isDouble(int d1, int d2) {
    return d1 == d2;
}

class space {
    string name;
    string spaceType;
public:
    string getName();
    void setName(string n);

    string getSpaceType();
    void setSpaceType(string t);
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

int main()
{
    int dieOne = generateOneThruSix();
    int dieTwo = generateOneThruSix();
    cout << "Die one: " << dieOne << " Die two: " << dieTwo << " Rolled a double: " << isDouble(dieOne, dieTwo) << endl;

    space go;
    go.setName("GO");
    go.setSpaceType("Special");

    cout << "Space name: " << go.getName() << " Space type: " << go.getSpaceType() << endl;
}