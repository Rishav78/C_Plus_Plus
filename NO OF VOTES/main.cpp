#include <iostream>
#include <string>
#include <cstring>
using namespace std;

string max_votes(string *name, int n)
{
    int a[20],Count=0,c=0,Max=0,pos;
    string b[20];
    for(int i=0;i<n;i++)
    {
        Count=0;
        for(int j=i+1;j<n;j++)
        {
            if(name[i]==name[j] && name[i]!="~")
            {
                name[j]="~";
                Count++;
            }
        }
        a[c]=Count;
        b[c]=name[i];
        c++;
    }
    for(int i=0;i<c;i++)
    {
        if(a[i]>Max)
        {
            Max=a[i];
            pos=i;
        }
        else if(a[i]==Max)
        {
            if(strcmp(name[pos].c_str(),name[i].c_str())>0)
            {
                pos=i;
            }
        }
    }
    return b[pos];
}

int main()
{
    string name[20];
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> name[i];
    }
    cout << max_votes(name,n);
    return 0;
}
