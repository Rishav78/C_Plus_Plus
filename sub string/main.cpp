#include <iostream>

using namespace std;

class Sub_string
{
    string str;
    int len;
public:
    Sub_string()
    {
        cin >> str;
        len = str.length();
    }
    int count_r()
    {
        char a[len],temp[len];
        int i=0,j,coun=0;
        int dup;
        while(str[i]!='\0')
        {
            j=0;
            while(str[i]!=' ')
            {
                a[j]=str[i];
                j++;
                i++;
            }
            a[j]='\0';
            cout << a << endl;
            --j;
            dup=0;
            while(a[dup]!='\0')
            {
                temp[j] = a[dup];
                cout << temp[j];
                j--;
                dup++;
            }
            temp[dup]='\0';
            j=0;
            cout << temp;
            while(a[j]!='\0')
            {
                if(a[j]!=temp[j])
                {
                    cout <<endl<< a[j] << temp[j] <<endl;
                    break;
                }
                j++;
            }
            if(j==(dup-1))
            {
                coun++;
            }
            i++;
            break;
        }
        return coun;
    }
};

int main()
{
    Sub_string obj;
    cout << obj.count_r();
    return 0;
}
