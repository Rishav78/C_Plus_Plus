#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string s;
    string dup1;
    cin >> s;
    string dup = s;
    sort(dup.begin(),dup.end());
    dup.erase(unique(dup.begin(),dup.end()),dup.end());
    cout<<dup<<endl;
    for(int i=0;i<dup.size();i++)
    {
        dup1 = dup1 + dup[i];
        dup1 = dup1 + (char)('0' + count(s.begin(),s.end(),dup[i]));
    }
    cout << dup1;
    return 0;
}
