#include <iostream>
#include<fstream>
#include<string>
#include<conio.h>
#include<cstring>
using namespace std;

int main()
{
    ifstream in;
    ofstream out;
    out.open("out.txt");
    in.open("in.txt");
    char ch;
    string ob;
    while(1)
    {
        ch=in.get();
        if(ch==EOF)
        {
            break;
        }
        ob+=ch;
    }
    for(int i=0;i<ob.length();i++)
    {
        if(i==0)
        {
            ob.insert(ob.begin(),'(');
        }
        else if(ob[i]==' ')
        {
            ob.insert(ob.begin()+i,')');
            ob.insert(ob.begin()+(i+2),'(');
            i=i+2;
        }
        else if(ob[i]=='\n' && ob[i+1]!=' ')
        {
            ob.insert(ob.begin()+(i),')');
            ob.insert(ob.begin()+(i+2),'(');
            i=i+2;
        }
        else if((i+1)==ob.size())
        {
            ob.insert(ob.begin()+(i+1),')');
            i++;
        }
        else{}
    }
    out << ob.c_str();
    in.close();
    out.close();
    return 0;
}
