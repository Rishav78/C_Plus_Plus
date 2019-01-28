#include <iostream>
#include<fstream>
#include<istream>
#include<string>
using namespace std;

int main()
{
    string a[100],obj1;
    char ch;
    int i=0,j=0,Count=0,len=0,flag=1;
    ifstream obj;
    obj.open("C:/Users/Rishav/Desktop/append1.txt");
    ch = (char)obj.get();
    while(!obj.eof())
    {
        if(ch==' ' || ch=='\n')
        {
            if(flag!=1)
            {
                len++;
                a[i]=obj1;
                obj1.erase(obj1.begin(),obj1.end());
                i++;
            }
            ch = (char)obj.get();
            flag=1;
        }
        else
        {
            flag=0;
            obj1 = obj1 + ch;
            ch=(char)obj.get();
        }
    }
    a[i]=obj1;
    len++;
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(a[i]==a[j] && a[i]!="~")
            {
                a[j]="~";
            }
        }
    }
    for(j=0;j<len;j++)
        {
            if(a[j]!="~")
            {
                Count++;
            }
        }
    cout << Count << endl;
    return 0;
}
