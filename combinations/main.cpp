#include <iostream>
#include<cstring>
#include<vector>
using namespace std;

class combination
{
    string str;
    vector <string>obj;
public:
    combination(string str)
    {
        this->str=str;
    }
    void comb3()
    {
        char ch,temp;
        int i;
        obj.push_back(str);
        ch = str[str.length()-1];
        while(true)
        {
            if(str.length()<=3)
            {
                i=1;
            }
            else
            {
                i=2;
            }
            for(;i<str.length();i++)
            {
                if(str[i-1]==ch && i==(str.length()-1))
                {
                    break;
                }
                temp=str[i-1];
                str[i-1]=str[i];
                str[i]=temp;
                obj.push_back(str);
            }
            if(i!=str.length())
            {
                break;
            }
        }
    }
    void comb4()
    {
        char temp;
        for(int i=0;i<str.length();i++)
        {
            temp=str[0];
            str[0]=str[i];
            str[i]=temp;
            comb3();
        }
    }
    void comb()
    {
        if(str.length()>3)
        {
            comb4();
        }
        else
        {
            comb3();
        }
    }
    void show()
    {
        for(int i=0;i<obj.size();i++)
        {
            cout << obj[i] << endl;
        }
        cout << obj.size();
    }
};

int main()
{
    string ob;
    cin >> ob;
    combination obj(ob);
    obj.comb();
    obj.show();
    return 0;
}
