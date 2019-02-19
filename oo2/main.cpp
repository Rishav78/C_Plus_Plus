#include <iostream>

using namespace std;

class Distance
{
  private:
  double feet, inch;
  public:
  void readDistance(int feet, int inch)
  {
   this->feet = feet;
   this->inch = inch;
  }
  Distance operator+(Distance obj)
  {
    int flag=0;
    Distance obj1;
    if((inch + obj.inch)>=12)
    {
        ++flag;
    	obj1.inch = (inch + obj.inch)-12;
    }
    else
    {
      obj1.inch = inch + obj.inch;
    }
    if(flag>0)
    {
    	obj1.feet = feet + obj.feet + flag;
    }
    else
    {
      obj1.feet = feet + obj.feet;
    }
    return obj1;
  }
  Distance operator-(Distance obj)
  {
    Distance obj1;
    obj1.inch = inch - obj.inch;
    obj1.feet = feet - obj.feet;
    return obj1;
  }
  void display()
  {
    cout <<feet<<"\'"<<inch<<"\"";
  }
};

int main()
{
    Distance obj,obj1,obj3;
    obj.readDistance(1,2);
    obj1.readDistance(3,4);
    obj3 = obj + obj1;
    obj3.display();
    return 0;
}
