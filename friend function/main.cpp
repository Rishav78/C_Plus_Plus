#include <iostream>

using namespace std;

class integer;

class Complex
{
    int a,i;
public:
    Complex()
    {
        cout << "Enter complex no _ + _i"<<endl;
        cin >> a >> i;
    }
    void display()
    {
        cout << a << "+ i" << i << endl;
    }
    friend void addition(Complex &x, integer y);
};
class integer
{
    int n;
public:
    integer()
    {
        cout << "Enter the Integer number:" << endl;
        cin >> n;
    }
    void display()
    {
        cout << n;
    }
    friend void addition(Complex &x, integer y);
};

void addition(Complex &x, integer y)
{
    x.a = x.a + y.n;
    x.i = x.i + y.n;
}
int main()
{
    Complex obj;
    integer obj1;
    addition(obj,obj1);
    obj.display();
    return 0;
}
