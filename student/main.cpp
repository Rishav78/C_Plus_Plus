#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    int Max=0;
    int frist=0,last=39;
    int max_marks;
    vector<float>obj;
    vector<int>ob(7,0);
    cin >> n;
    cin >> max_marks;
    for(int i=0;i<n;i++)
    {
       float n1;
       cin >> n1;
       if(n1>Max)
       {
           Max = n1;
       }
       float m=((n1)/max_marks)*100.0;
       obj.push_back(m);
    }
    for(int i=0;i<obj.size();i++)
    {
        if(obj[i]>=0 && obj[i]<=39)
        {
            ob[0]++;
        }
        else if(obj[i]>=40 && obj[i]<=49)
        {
            ob[1]++;
        }
        else if(obj[i]>=50 && obj[i]<=59)
        {
            ob[2]++;
        }
        else if(obj[i]>=60 && obj[i]<=69)
        {
            ob[3]++;
        }
        else if(obj[i]>=70 && obj[i]<=79)
        {
            ob[4]++;
        }
        else if(obj[i]>=80 && obj[i]<=89)
        {
            ob[5]++;
        }
        else if(obj[i]>=90 && obj[i]<=100)
        {
            ob[6]++;
        }
    }
    for(int i=0;i<7;i++)
    {
        if(i==0)
        {
            cout << frist << "-" << last << "  " << ob[i] <<endl;
            frist = last + 1;
            last = last + 10;
        }
        else
        {
            cout << frist << "-" << last << " " << ob[i] <<endl;
            frist = last + 1;
            last = last + 10;
            if((i==5))
            {
                ++last;
            }
        }
    }
    cout << Max;
    return 0;
}
