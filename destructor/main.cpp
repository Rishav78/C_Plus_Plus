#include <iostream>

using namespace std;
class Add
{
    int *a,*b;
public:
    Add(Add &obj)
    {
        a = obj.a;
        b = obj.b;
    }
    Add(int x, int y)
    {
        cout << "Here start the program" << endl;
       a = new int(x);
       b = new int(y);
    }
    void show()
    {
        cout << *a << endl << *b << endl;
    }
    ~Add()
    {
        cout << "Here programs end" << endl;
        delete a;
        delete b;
    }
};

int main()
{
    Add obj1(6,7);
    Add *obj = new Add(obj1);
    obj->show();
    delete obj;
    return 0;
}
