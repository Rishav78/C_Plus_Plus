#include <iostream>
#include<istream>
#include<fstream>
#include<vector>
using namespace std;

int main()
{
    vector <char>obj;
    int Size=0,i,j;
    ifstream o;
    o.open("C:/Users/Rishav/Desktop/append1.txt");
    char ch;
    o.seekg(0,ios_base::end);
    Size=o.tellg();
    for(i=1;i<=Size;i++)
    {
        o.seekg(-i,ios_base::end);
        ch = (char)o.get();
        if(ch==' ')
        {
            for(j=0;j<obj.size();j++)
            {
                cout << obj[j];
            }
            cout << ' ';
            obj.clear();
        }
        else if(ch=='\n')
        {
            for(j=0;j<obj.size();j++)
            {
                cout << obj[j];
            }
            cout << '\n';
            obj.clear();
        }
        else
        {
            obj.insert(obj.begin(),ch);
        }
    }
    for(i=0;i<obj.size();i++)
    {
        cout << obj[i];
    }
    return 0;
}
