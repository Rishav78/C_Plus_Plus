#include <iostream>

using namespace std;
/*
class parent
{
public:
    virtual void g(){cout<<"b";}
};

class child : public parent
{
public:
    virtual void g(){cout<<"g";}
};

int main()
{
    parent *p = new parent();
    ((child*)p)->g();
    delete p;
}*/


template <class T, int max>
int arrMin(T arr[], int n)
{
   int m = max;
   for (int i = 0; i < n; i++)
      if (arr[i] < m)
         m = arr[i];
    return m;
}
int main()
{
   int arr1[]  = {11, 10, 5, 112, 23};
   int n1 = sizeof(arr1)/sizeof(arr1[0]);
   char arr2[] = {2, 3, 4, 6};
   int n2 = sizeof(arr2)/sizeof(arr2[0]);
   cout << arrMin<int, 10000>(arr1, n1) << endl;
   cout << arrMin<char, 256>(arr2, n2);
   return 0;
}

/*
template<typename A, typename B>
void sum(A a, B b)
{
    cout << a+b;
}

int main()
{
    int a;
    double b;
    cin >> a >> b;
    sum<int,double>(a,b);
    return 0;
}*/

