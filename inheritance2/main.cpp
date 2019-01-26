#include <iostream>

using namespace std;

class parent
{
    int x;
public:
    parent()
    {
        x=12;
    }
    virtual int ret()
    {
        return x;
    }
};

class child : public parent
{
public:
    child():parent()
    {

    }
    int ret()
    {
        return parent::ret();
    }
};

int main()
{
    child obj;
    cout << obj.ret();
    return 0;
}
