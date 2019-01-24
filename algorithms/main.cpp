#include <iostream>
#include <vector>
#include <algorithm>
#include <typeinfo>
using namespace std;

int main()
{
    auto x=12;
    vector<int> obj;
    int n,num,*p;
    cin >> n;
    cout <<typeid(x).name;
    for(int i=0;i<n;i++)
    {
        cin >> num;
        obj.push_back(num);
    }
    cout << endl;
    cout << *max_element(obj.begin(),obj.end()) << endl;
    cout << *find(obj.begin(),obj.end(),5)<< endl;
    cout << binary_search(obj.begin(),obj.end(),5) << endl;
    cout << count(obj.begin(),obj.end(),5) << endl;
    cout << distance(obj.begin(),lower_bound(obj.begin(),obj.end(),5));
    cout << endl << endl;
    sort(obj.begin(),obj.end());
    obj.erase(unique(obj.begin(),obj.end()),obj.end());
    for(vector<int>::iterator ob = obj.begin(); ob!=obj.end(); ob++)
    {
        cout << *ob << endl;
    }
    cout << endl;
    cout << none_of(obj.begin(),obj.end(),[](int x){return x>5;});
    return 0;
}
