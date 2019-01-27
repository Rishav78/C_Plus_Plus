#include <iostream>

using namespace std;

class Array
{
    int **p,n,m;
public:
    Array(){}
    Array(int n, int m)
    {
        int i,j;
        this->n = n;
        this->m = m;
        p = new int*[n];
        for(i=0;i<n;i++)
        {
            p[i] = new int[m];
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin >> p[i][j];
            }
        }
    }
    Array operator*(Array obj)
    {
        int i,j,k,sum;
        Array obj1;
        obj1.n = n;
        obj1.m = obj.m;
        obj1.p = new int*[n];
        for(i=0;i<n;i++)
        {
            obj1.p[i] = new int[obj.m];
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<obj.m;j++)
            {
                sum=0;
                for(k=0;k<n;k++)
                {
                    sum = sum + p[i][k]*obj.p[k][j];
                }
                obj1.p[i][j]=sum;
            }
        }
        return obj1;
    }
    void Display()
    {
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cout << p[i][j] << " ";
            }
            cout <<endl;
        }
    }
    ~Array()
    {
        delete p;
    }
};

int main()
{
    int n,m;
    cin >> n >> m;
    Array* obj = new Array(2,2);
    Array *obj1 = new Array(2,2);
    Array *obj2 = new Array();
    obj->Display();
    obj1->Display();
    *obj2 = *obj * *obj1;
    obj2->Display();
    delete obj;
    delete obj1;
    delete obj2;
    return 0;
}
