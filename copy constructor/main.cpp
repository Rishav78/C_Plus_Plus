#include <iostream>
#include<string>
#include<sstream>

using namespace std;

class Rectangle
{
  int x,y,width,height;
public:
  Rectangle(int x, int y, int width, int height)
  {
    this->x=x;
    this->y=y;
    this->width=width;
    this->height=height;
  }
    int getHeight()
    {
        return height;
    }
    int getWidth()
    {
        return width;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    string toString()
    {
      stringstream obj1,obj2,obj3,obj4;
      string X,Y,Width,Height;
      obj1 << x;
      obj1 >> X;
      obj2 << y;
      obj2 >> Y;
      obj3 << height;
      obj3 >> Height;
      obj4 << width;
      obj4 >> Width;
      cout << Y << endl;
        string s = "Rectangle[x=" + X ;
        s = s + ",y=";
        s = s + Y ;
        s = s + ",width=" ;
        s = s + Width ;
        s = s + ",height=" ;
        s = s + Height ;
        s = s + "]";
        return s;
    }
};

int main()
{
    Rectangle obj(1,2,3,4);
    cout << obj.toString();
}
