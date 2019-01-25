#include <iostream>
#include<stack>
using namespace std;

int balancedString(string s)
{
    stack<int>obj1;
    stack<int>obj2;
    int i;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='{')
        {
            obj1.push(i+1);
        }
        else if(s[i]=='(')
        {
            obj2.push(i+1);
        }
        else if(s[i]=='}')
        {
            if(obj1.empty())
            {
                return i;
            }
            else
            {
                obj1.pop();
            }
        }
        else if(s[i]==')')
        {
            obj2.pop();
        }
        else{}
    }
    if(!obj1.empty())
    {
        return obj1.top();
    }
    else if(!obj2.empty())
    {
        return obj2.top();
    }
    else
    {
        return -1;
    }
}

int main()
{
    string s;
    cin >> s;
    cout << balancedString(s);
    return 0;
}
