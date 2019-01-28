#include <iostream>
#include <fstream>
#include <istream>
#include <vector>
using namespace std;

int main()
{
    int i=0,flag=1,init,last,j;
    vector <int>obj;
    ifstream is;
    is.open("C:/Users/Rishav/Desktop/append2.txt");
    char ch;
    ch = is.get();
    while(!is.eof())
    {
        if(ch==',')
        {
            flag=1;
            i++;
        }
        else if(ch==' ')
        {

        }
        else if(flag==1)
        {
            obj.push_back(int(ch)-48);
            flag++;
        }

        else
        {
            obj[i] = obj[i]*10 + int(ch)-48;
        }
        ch = is.get();
    }
    for(i=0;i<=9;i++)
    {
        flag=0;
        for(j=0;j<obj.size();)
        {
            if(i==0)
            {
                init = i*10;
                last = (i+1)*10;
            }
            else
            {
                init = i*10 + 1;
                last = (i+1)*10;
            }
            if(obj[j]>=init && obj[j]<=last)
            {
                flag++;
                obj.erase(obj.begin()+j);
            }
            else
            {
                j++;
            }
        }
        if(i==0)
        {
            cout << '0' << init << '-' << last << ':';
        }
        else
        {
            cout << init << '-' << last << ':';
        }
        for(j=0;j<flag;j++)
        {
            cout << '#';
        }
        cout << endl;
    }
    return 0;
}
