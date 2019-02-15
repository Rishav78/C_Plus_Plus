#include <iostream>
#include<set>
using namespace std;

int main()
{
    multiset<int>obj;
    int n,n1;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> n1;
        obj.insert(n1);
    }
    cout << endl;
    for(auto i=obj.begin();i!=obj.end();i++)
    {
        cout << *i << endl;
    }
    cout << endl;
    obj.erase(obj.find(1));
    cout << "size:"<< obj.size() << endl;
    cout << "max_size" << obj.max_size();
    return 0;
}
