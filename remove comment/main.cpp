#include <iostream>
#include<istream>
#include<fstream>
#include<vector>
using namespace std;

int main()
{
    ifstream obj;
    ofstream obj2;
    obj2.open("C:/Users/Rishav/Desktop/append1.txt", ios::app);
    char ch;
    string obj1;
    int single=0,multiple=0,i;
    obj.open("C:/Users/Rishav/Desktop/append2.txt");
    ch = obj.get();
    while(!obj.eof())
    {
        obj1 = obj1 + ch;
        ch = obj.get();
    }
    for(i=0;i<obj1.size();)
    {
        if(obj1[i]=='/' && obj1[i+1]=='/')
        {
            obj1.erase(obj1.begin()+i);
            obj1.erase(obj1.begin()+i);
            single++;
        }
        else if(obj1[i]=='\n')
        {
            if(multiple>0 || single>0)
            {
                obj1.erase(obj1.begin()+i);
            }
            else
            {
                i++;
            }
            if(single>0)
            {
                single--;
            }
        }
        else if(obj1[i]=='/' && obj1[i+1]=='*')
        {
            obj1.erase(obj1.begin()+i);
            obj1.erase(obj1.begin()+i);
            multiple++;
        }
        else if(obj1[i]=='*' && obj1[i+1]=='/')
        {
            obj1.erase(obj1.begin()+i);
            obj1.erase(obj1.begin()+i);
            multiple--;
        }
        else if(single>0 || multiple>0)
        {
            obj1.erase(obj1.begin()+i);
        }
        else
        {
            i++;
        }
    }
    single=0;
    for(i=0;i<obj1.size();)
    {
            if(obj1[i]==' ' && single>0)
            {
                obj1.erase(obj1.begin()+i);
            }
            else
            {
                if(obj1[i]==' ')
                {
                    single=1;
                }
                else
                {
                    single=0;
                }
                i++;
            }
    }
    for(i=0;i<obj1.size();i++)
    {
        obj2 << obj1[i];
    }
    obj2.close();
    obj.close();
    return 0;
}
