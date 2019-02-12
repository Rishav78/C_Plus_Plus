#include <iostream>
#include<windows.h>
using namespace std;


class V
{
public:
    void v(int n)
    {
        static int i=0,j=0;
        static int k=0,q=n-1,flag=0;
        for(;i<n;)
        {
            for(j=0;j<n;j++)
            {
                if(i<n/2)
                {
                    if(j==0 || j==(n-1))
                    {
                        cout << "V";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                else
                {
                    flag=1;
                    if((j==k || j==q) && k<=q)
                    {
                            cout << "V";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                Sleep(1);
            }
            if(flag==1)
            {
                k++;
                q--;
            }
            i++;
            cout << endl;
            return;
        }
    }
};

class A
{
    V v;
public:
    void a(int n)
    {
        static int i=0,j=0;
        for(;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==0 || i==n/2)
                {
                    if(i==0 || i==n/2)
                    {
                        if((j==0 || j==(n-1)) && i==0)
                            cout << " ";
                        else
                            cout << "A";
                    }
                }
                else
                {
                    if(j==0 || j==(n-1))
                    {
                        cout << "A";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                Sleep(1);
            }
            cout << "  ";
            i++;
            v.v(n);
            return;
        }
    }
};

class H
{
    A a;
    static int q,l;
public:
    void h(int n)
    {
        for(;q<n;)
        {
            for(l=0;l<n;l++)
            {
                if(q==n/2)
                {
                    cout << "H";
                }
                else
                {
                    if(l==0 || l==(n-1))
                    {
                        cout << "H";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                Sleep(1);
            }
            cout << "  ";
            q++;
            a.a(n);
            return;
        }
    }
};

int H::q=0;
int H::l=0;

class S
{
    H h;
public:
    void s(int n)
    {
        static int i=0,j=0;
        for(;i<n;)
        {
            for(j=0;j<n;j++)
            {
                if(i==0 || i==(n-1))
                {
                    cout << "S";
                }
                else if(i>0 && i<(n-1) && i!=n/2)
                {
                    if(j==0 && i<n/2)
                    {
                        cout << "S";
                    }
                    else if(j==(n-1) && i>n/2)
                    {
                        cout << "S";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                else
                {
                    cout << "S";
                }
                Sleep(1);
            }
            cout << "  ";
            h.h(n);
            i++;
            return;
        }
    }
};

class I
{
    S s;
public:
    I(){}
   void i(int n)
    {
        static int i=0,j=0;
        for(;i<n;)
        {
            for(j=0;j<n;j++)
            {
                if(i==0 || i==(n-1))
                {
                    cout << "I";
                }
                else
                {
                    if(j==(n/2))
                    {
                        cout << "I";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                Sleep(1);
            }
            cout << "  ";
            s.s(n);
            i++;
            return;
        }
    }
};

class R
{
    class I q;
    int n;
public:
    R(int n)
    {
        this->n=n;
    }
    void r()
    {
        static int i=0,j=0;
        for(;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==0 || i==n/2)
                {
                    if(i==n/2 && j==(n-1))
                    {
                        cout << " ";
                    }
                    else
                    {
                        cout << "R";
                    }
                }
                else
                {
                    if(j==0 || j==(n-1))
                    {
                        cout << "R";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                Sleep(1);
            }
            cout << "  ";
            q.i(n);
        }
    }
};

int main()
{
    int n;
    cin >> n;
    if(n%2!=0 && n>3)
    {
        R r = n;
        r.r();
    }
    else
    {
        cout << "Wrong Input";
    }
    return 0;
}
