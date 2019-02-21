#include <iostream>

using namespace std;

bool Range(int n, bool flag = true)
{
    for(int i=1;i<n;i++)
    {
        if(flag==true)
        {
            if(Range(i,false)==true)
            {
                cout << i << endl;
            }
        }
        else
        {
            if(n%i==0 && i!=1)
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    Range(n);
    return 0;
}
