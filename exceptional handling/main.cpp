
#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed

using namespace std;

class Info
{
  string usr_name, paswd;
public:
  Info()
  {
    cin >> usr_name >> paswd;
  }
  void Check()
  {
    int i,flag=0;
    if(paswd.length()<6)
    {
      throw 's';
    }
    else
    {
      for(i=0;i<paswd.length();i++)
      {
        if((int)paswd[i]>=(int)'0' && (int)paswd[i]<=(int)'9')
        {
          flag=1;
          cout << "Correct";
          break;
        }
      }
      if(flag==0)
      {
        throw 'd';
      }
    }
  }
};

int main()
{
    Info obj;
    try
    {
        obj.Check();
    }
    catch(char ch)
    {
        if(ch =='d')
        {
            cout << "No digit!";
        }
        else
        {
            cout << "Too short!";
        }
    }
    return 0;
}
