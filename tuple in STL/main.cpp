#include <iostream>
#include<tuple>
using namespace std;

int main()
{
    tuple <string,int,int> obj;
    obj = make_tuple("rishav",18,2);
    cout << get<0>(obj);
    return 0;
}
