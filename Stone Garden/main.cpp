#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Stone
{
    int n;
    vector<int> s;
    vector< vector<int> > ss;
public:
    Stone()
    {
        cin >> n;
    }
    void split()
    {
        int n1=n;
        while(n1>0)
        {
            s.push_back(n1%10);
            n1/=10;
        }
        reverse(s.begin(),s.end());
    }
    int gcd(vector<int> o)
    {
        int g=1,j;
        for(int i=1;i<=(*min(o.begin(),o.end()));i++)
        {
            for(j=0;j<o.size();j++)
            {
                if(o[j]%i!=0)
                {
                    break;
                }
            }
            if(j==o.size())
            {
                g=i;
            }
        }
        return g;
    }
    int GCD_of_All()
    {
        int n=1;
        for(int i=0;i<ss.size();i++)
        {
            n*=gcd(ss[i]);
        }
        return n;
    }
    void Fix()
    {
        for(int i=0;i<s.size();i++)
        {
            superset(i);
        }
    }
    void superset(int n)
    {
        if(n==0)
        {
            for(int i=0;i<s.size();i++)
            {
                vector<int> obj;
                obj.push_back(s[i]);
                ss.push_back(obj);
            }
        }
        else
        {
            for(int i=0;i<(s.size()-n);i++)
            {
                for(int j=n+i;j<s.size();j++)
                {
                    vector<int> obj(s.begin()+i,s.begin()+(i+n));
                    obj.push_back(s[j]);
                    ss.push_back(obj);
                }
            }
        }
    }
    void
    void print()
    {
        for(int i=0;i<ss.size();i++)
        {
            for(int j=0;j<ss[i].size();j++)
            {
                cout << ss[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stone obj;
    obj.split();
    obj.Fix();
    cout <<"Greatest common divisor is: " << obj.GCD_of_All() << endl;
    obj.print();
    return 0;
}
