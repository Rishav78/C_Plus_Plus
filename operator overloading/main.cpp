#include <iostream>

using namespace std;

class Complex
{
    int a,i;
public:
    void get()
    {
        cin >> a >> i;
    }
    operator-()
    {
        a = -a;
        i = -i;
    }
    operator++(int)
    {
        a++;
        i++;
    }
    void show()
    {
        if(i<0)
        {
            cout << a<< " - i" <<-i;
        }
        else
        {
            cout << a  << " + i" << i;
        }
    }
    void operator++()
    {
        ++a;
        ++i;
    }
    friend Complex operator+(Complex obj)
    {
    Complex obj1;
    obj1.a = +obj.a;
    obj1.i = +obj.i;
    return obj1;
    }
    friend Complex operator--(Complex obj)
    {
        Complex obj1;
        obj1.a = --obj.a;
        obj1.i = --obj.i;
        return obj1;
    }

};

int main()
{
    Complex obj,obj1;
    obj.get();
    obj1=+obj;
    ++obj;
    obj1 = --obj;
    obj1.show();
    return 0;
}
