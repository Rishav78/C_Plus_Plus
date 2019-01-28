#include <iostream>
#include <istream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string obj3 = "C:/Users/Rishav/Desktop/append2.txt";
    ifstream is;
    vector <string>obj;
    int len=1,i,n;
    char ch,dup;
    cin >> n;
    is.open(obj3.c_str());
    ch = is.get();
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            obj.push_back("*");
        }
        else
        {
            obj[obj.size()-1] = obj[obj.size()-1] + "*";
        }
    }
    while(!is.eof())
    {
        if(len==1)
        {
            obj.push_back("");
            obj[obj.size()-1] = obj[obj.size()-1] + "*";
        }
        if(ch=='\n' && len<n)
        {
            while(len<(n-1))
            {
                obj[obj.size()-1] = obj[obj.size()-1] + ' ';
                len++;
            }
            obj[obj.size()-1] = obj[obj.size()-1] + "*";
            len=1;
        }
        else
        {
            len++;
        }
        if(ch==' ')
        {
            obj[obj.size()-1] = obj[obj.size()-1] + ch;
        }
        else if(len>2)
        {
            if(ch<97)
            {
                obj[obj.size()-1] = obj[obj.size()-1] + char(ch+32);
            }
            else
            {
                obj[obj.size()-1] = obj[obj.size()-1] + ch;
            }
        }
        else
        {
            if(ch<97)
            {
                obj[obj.size()-1] = obj[obj.size()-1] + ch;
            }
            else
            {
                obj[obj.size()-1] = obj[obj.size()-1] + char(ch-32);
            }
        }
        ch = is.get();
    }
    for(i=obj[obj.size()-1].size();i<n-1;i++)
    {
        obj[obj.size()-1] = obj[obj.size()-1] + ' ';
    }
    obj[obj.size()-1] = obj[obj.size()-1] + '*';
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            obj.push_back("*");
        }
        else
        {
            obj[obj.size()-1] = obj[obj.size()-1] + '*';
        }
    }
    for(i=0;i<obj.size();i++)
    {
        cout << obj[i] << endl;
    }
    return 0;
}
