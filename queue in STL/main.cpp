#include <iostream>
#include<queue>
using namespace std;

int main()
{
    queue <int>obj;
    int i=1;
    while(i!=0)
    {
        obj.push(i);
        cin >> i;
    }
    while(obj.empty())
    {
        cout << obj.front();
        obj.pop();
    }
    return 0;
}
