#include <iostream>
#include<istream>
#include<fstream>
#include<vector>
using namespace std;

int main()
{
    ifstream obj;
    char ch;
    string str;
    int i=0,j;
    vector <string>obj2;
    obj.open("C:/Users/Rishav/Desktop/append2.txt");
    ch = obj.get();
    cout << str.length() << endl;
    while(!obj.eof())
    {
        if(ch==9)
        {
            if(str.length())
            {
                obj2.push_back(str);
            }
            j=str.length();
            cout << j << endl;
            str.clear();
            for(i=j;i<8;i++)
            {
                str = str+ ' ';
            }
            obj2.push_back(str);
            str.clear();
        }
        else if(ch=='\n')
        {
            obj2.push_back(str);
            obj2.push_back("\n");
            str.clear();
        }
        else
        {
            str = str + ch;
        }
        ch = obj.get();
    }
    obj2.push_back(str);
    for(i=0;i<obj2.size();i++)
    {
        cout << obj2[i];
    }
    obj.close();
    return 0;
}
