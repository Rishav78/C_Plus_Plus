#include <iostream>

using namespace std;

class parent
{
protected:
    int a,b;
public:
    parent(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    int add()
    {
        return a+b;
    }
};

class child : public parent
{
public:
    child(int a, int b):parent::parent(a,b)
    {}
    int multiply()
    {
        return a*b;
    }
};

int main()
{
    int a,b;
    cin >> a >> b;
    child obj(a,b);
    cout << obj.add() << endl;
    cout << obj.multiply();
    return 0;
}
