#include <iostream>
#include<sstream>
#include<string>
using namespace std;

class Person
{
  protected:
  string name,colour;
  int eyes,year;
};
class Actor : public Person
{
    public:
	Actor(string n, string c, int e, int l)
    {
    	name = n;
        colour = c;
        eyes = e;
        year = l;
    }
    string toString()
    {
    	string EYES,YEAR,TOTAL;
    	stringstream Eyes,Year;
        Eyes << eyes;
        Year << year;
        Eyes >> EYES;
        Year >> YEAR;
        TOTAL = "The person " + name +" is an Actor. He is " + colour +" in color, has " + EYES +" eyes and debut in " + YEAR;
        return TOTAL;
    }
};
class Actress : public Person
{
    public:
	Actress(string n, string c, int e, int l)
    {
    	name = n;
        colour = c;
        eyes = e;
        year = l;
    }
    string toString()
    {
    	string EYES,YEAR,TOTAL;
    	stringstream Eyes,Year;
        Eyes << eyes;
        Year << year;
        Eyes >> EYES;
        Year >> YEAR;
        TOTAL = "The person " + name +" is an Actor. She is " + colour +" in color, has " + EYES +" eyes and debut in " + YEAR;
        return TOTAL;
    }
};


int main()
{
    Actor obj("rishav","vroen",12,1999);
    Actress obj1("name","yellow",12,1999);
    cout << obj.toString() << endl;
    cout << obj1.toString();
    return 0;
}
