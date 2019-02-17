#include <iostream>

using namespace std;

class abc
{
    int a,b;
public:
    int x;
    abc(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void print()
    {
        cout << a << b;
    }
};

int main()
{
    int abc::*z = &abc::x;
    abc obj(2,3);
    void (abc::*ptr)() = &abc::print;
    obj.*z = 13;
    abc *p;
    p = &obj;
    obj.print();
    p->print();
    (obj.*ptr)();
    cout << obj.*z;
    return 0;
}
