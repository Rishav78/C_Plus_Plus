#include <iostream>

using namespace std;
/*
int add(int x, int y)
{
    return x+y;
}

int (*point)(int, int)=add;

int main()
{
    cout << add(5,6) << endl;
    cout << point(5,6) << endl;
    cout << (*point)(5,6) << endl;
    return 0;
}*/

int add(int x, int y)
{
    return x+y;
}

int sub(int x, int y)
{
    return x-y;
}

int mul(int x, int y)
{
    return x*y;
}

int main()
{
    int i;
    int (*point[3])(int, int);
    point[0] = add;
    point[1] = sub;
    point[2] = mul;
    for(i=0;i<3;i++)
    {
        cout << point[i](i,i+1) <<  endl;
    }
}
