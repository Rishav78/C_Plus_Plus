#include <iostream>

using namespace std;

class Time
{
    int h,m,s;
public:

    Time(int sec)
    {
        int dup;
        dup = sec/60;
        s = sec%60;
        m = dup%60;
        dup /=60;
        h = dup;
    }
    operator int()
    {
        return (h*3600 + m*60 +s);
    }
    void show()
    {
        cout << h << "h:" << m << "m:" << s << "s" << endl;
    }

};

int main()
{
    int sec,dup;
    cin >> sec;
    Time obj = sec;
    obj.show();
    dup = obj;
    cout << dup;
    return 0;
}
