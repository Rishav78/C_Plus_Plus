#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed

using namespace std;

class Array
{
  int *str,Size;
public:
  Array()
  {
    cin >> Size;
    str = new int[Size];
  }
  void get_data()
  {
    int i;
    for(i=0;i<Size;i++)
    {
      cin >> str[i];
    }
  }
  void print(int x)
  {
    if(x>=Size)
    {
      throw 1;
    }
    cout << str[x];
  }
  ~Array()
  {
      delete str;
  }
};

int main()
{
    int x;
    Array obj;
    obj.get_data();
    while(true)
    {
        cin >> x;
        try
        {
            obj.print(x);
        }
        catch(int y)
        {
            cout << "Out of Bounds";
            break;
        }
    }
    return 0;
}
