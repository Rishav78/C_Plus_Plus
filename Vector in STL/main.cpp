#include <iostream>
#include<vector>
using namespace std;

vector <int>intersection(vector <int>&v1, vector <int>&v2)
{
  vector <int>v;
  for(int i=0;i<v1.size();i++)
  {
    for(int j=0;j<v2.size();j++)
    {
      if(v1[i]==v2[j])
      {
        v.push_back(v1[i]);
      }
    }
  }
  return v;
}


int main()
{
    vector <int> obj1 {1,2,3,4,5};
    vector <int> obj2 {1,2,3,4};
    vector <int> obj;
    obj = intersection(obj1,obj2);
    for(int i=0;i<obj.size();i++)
    {
        cout << obj[i] << endl;
    }
    return 0;
}
