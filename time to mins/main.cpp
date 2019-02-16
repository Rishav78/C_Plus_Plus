#include <iostream>

using namespace std;

class Time
{
    int hrs,mins;
public:
    Time(int h, int m);
    int getMinutes();
    void display();
};

class Minutes
{
    int mins;
public:
    void operator=(Time T);
    void display();
};

Time::Time(int h, int m)
{
    hrs = h;
    mins = m;
}
int Time::getMinutes()
{
    return ((hrs*60)+mins);
}
void Time::display()
{
    cout << hrs << " " << mins << endl;
}

void Minutes::operator=(Time T)
{
    mins = T.getMinutes();
}
void Minutes::display()
{
    cout << mins << endl;
}
int main()
{
    int h,m;
    cin >> h >> m;
    Time obj(h,m);
    Minutes ob;
    obj.display();
    ob = obj;
    ob.display();
    return 0;
}
