#include <iostream>
using namespace std;
void m1 (int i, float f)
{
    cout<<"m1-if";
}

void m1(float f, float i)
{
    cout<<"m1-ff";
}

int main()
{
    m1(20.0,20);
}
