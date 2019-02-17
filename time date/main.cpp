#include <iostream>

using namespace std;
class Date
{
    public:
    int d, m, y;
    void getDates();
    friend int getDifference(Date dt1, Date dt2);
};
int constintmonthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void Date::getDates()
{
    cin >> d >> m >> y;
}

int getDifference(Date dt1, Date dt2)
    {
        if(dt1.y>dt2.y)
        {
            cout << "invalid input";
            return 0;
        }
        else if(dt1.y==dt2.y && dt1.m==dt2.m)
        {
            return (dt2.d-dt1.d);
        }
        else if(dt1.y==dt2.m && dt1.m>dt2.m)
        {
            cout << "invalid input";
            return 0;
        }
        else if(dt1.y==dt2.m && dt1.m>dt2.m && dt1.d>dt2.d)
        {
            cout << "invalid input";
            return 0;
        }
        else{}
        int Count=0,i,j,k,temp1,temp2,temp3,temp4;
        for(i=dt1.y;i<=dt2.y;)
        {
            if(dt1.y==dt2.y)
            {
                temp1=dt1.m;
                temp2=dt2.m;
            }
            else if(i==dt1.y)
            {
                temp1=dt1.m;
                temp2=12;
            }
            else if(i==dt2.y)
            {
                temp1=1;
                temp2=dt2.m;
            }
            else
            {
                temp1=1;
                temp2=12;
            }
            for(j=temp1;j<=temp2;j++)
            {
                if(j==dt2.m && i==dt2.y)
                {
                    temp3=1;
                    temp4 = dt2.d;
                }
                else if(j==dt1.m && i==dt1.y)
                {
                    temp3=dt1.d+1;
                    temp4=constintmonthDays[j-1];
                }
                else
                {
                    temp3=1;
                    temp4=constintmonthDays[j-1];
                }
                for(k=temp3;k<=temp4;k++)
                {
                    Count++;
                }
            }
            i++;
        }
        return Count;
    }

int main() {
    Date dt1;
    dt1.getDates();
    Date dt2;
    dt2.getDates();
    int x =getDifference(dt1, dt2);
    cout<<x;


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
