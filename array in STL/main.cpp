#include <iostream>
#include<array>
using namespace std;

int main()
{
    array <int,5> obj={0,1,2,3,4};
    try
    {
        cout << obj[5] << endl;
    }
    catch(out_of_range obj1)
    {
        cout << "Out Of Range";
    }
    cout << obj.front() << endl;
    cout << obj.back();
    return 0;
}
