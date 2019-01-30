#include <iostream>

using namespace std;

class parent
{
public:
    void get()
    {
        cout << "parent" << endl;
    }
};

class child : public parent
{
public:
    void get()
    {
        cout << "child";
    }
};
int main()
{
    child obj;
    obj.get();
    return 0;
}
