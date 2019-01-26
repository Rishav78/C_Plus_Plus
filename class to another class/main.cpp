#include <iostream>
#include<math.h>
using namespace std;
class Circle;
class Rectangle
{
    int l,b;
    float area;
public:
    Rectangle(){}
    Rectangle(int l)
    {
        this->l = l;
        this->b = 2*l;
    }
    void calculate()
    {
        area = l*b;
    }
    friend class Circle;
};

class Circle
{
    float area,r;
public:
    Circle(){}
    Circle(Rectangle &obj)
    {
        r=sqrt(obj.area/3.14);
        area = obj.area;
    }
    operator float()
    {
        return r;
    }
};

int main()
{
    Circle c;
    Rectangle r;
    int value;
    cin >> value;
    r = value;
    r.calculate();
    c = r;
    int radius = c;
    cout << radius;
    return 0;
}
