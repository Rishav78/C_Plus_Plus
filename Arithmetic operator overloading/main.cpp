#include<iostream>

using namespace std;

class IntValue
{
  private:
  	int value;
  public:
    void setValue()
    {
      value = 0;
    }
    void setValue(int a)
    {
      value = a;
    }
  IntValue operator+(IntValue obj)
  {
    IntValue obj1;
    obj1.value = value + obj.value;
    return obj1;
  }
  IntValue operator-(IntValue obj)
  {
    IntValue obj1;
    obj1.value = value - obj.value;
    return obj1;
  }
  IntValue operator*(IntValue obj)
  {
    IntValue obj1;
    obj1.value = value * obj.value;
    return obj1;
  }
    void display()
    {
        if(value>= 2147483648 || value <=  -2147483648)
            cout << "out of bounf";
        else
            cout << value;
    }
};

int main()
{
    IntValue obj,obj1,obj2;
    obj.setValue(17109999);
    obj1.setValue(56);
    obj2 = obj * obj1;
    obj2.display();
}
