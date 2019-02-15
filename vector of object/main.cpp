#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

class Student
{
    string name;
    int rollno;
    int age;
public:
    void get_data()
    {
        cin >> name >> rollno >> age;
    }
    void show_data()
    {
        cout << name << endl << rollno << endl << age << endl;
    }
};
int main()
{
    vector <Student> Data;
    int n,n1,no;
    cin >> no;
    while(no--)
    {
        cin >> n;
        if(n==1)//add student
        {
            Student obj;
            obj.get_data();
            Data.push_back(obj);
        }
        else if(n==2)//delete
        {
            cin >> n1;
            Data.erase(Data.begin()+n1);
        }
        else
        {
            cin >> n1;
            Data[n1].show_data();
        }
    }
    for(int i=0;i<Data.size();i++)
    {
        Data[i].show_data();
    }
    return 0;
}
