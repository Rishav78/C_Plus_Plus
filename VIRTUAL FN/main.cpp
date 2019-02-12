#include <iostream>

using namespace std;

class abc
{
public:
    virtual void show()
    {
        cout << "abc";
    };
};

class der : public abc
{
public:
    void show()
    {
        cout <<"der";
    }
};

int main()
{
    abc *p = new der();
    ((der*)p)->show();
    delete p;
    return 0;
}
