#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int n,c,m,total_cup,dup;
    for(int i=0;i<t;i++)
    {
        total_cup=0;
        cin >> n >> c >> m;
        total_cup=n/c;
        dup=total_cup;
        while(dup>=m)
        {
            dup=dup-m+1;
            ++total_cup;
        }
        cout << total_cup << endl;
    }
    return 0;
}
