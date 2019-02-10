#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>obj;
    int n,n1;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> n1;
        obj.push_back(n1);
    }
    auto it = obj.begin() + 1;
    cout << *it;
    for(auto i=obj.begin();i!=obj.end();i++)
    {
        cout << *i<< endl;
    }
    return 0;
}
