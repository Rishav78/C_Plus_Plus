#include<iostream>
#include<cstdio>

using namespace std;

class Interest
{
  int p,r,t;
  public:
  Interest()
  {
    cin >> p >> r >> t;
  }
  void Compound()
  {
    cout << p+float(((r*p)/100.0)*t);
  }
};

int main()
{
    Interest obj;
    obj.Compound();

    return 0;
}
