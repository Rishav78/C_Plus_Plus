#include <iostream>

using namespace std;

class Matrix
{
    int **p,m,n;
public:
    Matrix()
    {
        int i;
        cin >> m >> n;
        p = new int*[m];
        for(i=0;i<m;i++)
        {
            p[i] = new int[n];
        }
    }
    void operator=(int Count)
    {
        int i,j;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                p[i][j] = p[i][j] + Count;
            }
        }
    }
    operator int()
    {
        int sum=0,i,j;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                sum = sum + p[i][j];
            }
        }
        return sum;
    }
    ~Matrix()
    {
        delete p;
    }
    friend void operator>>(istream &in, Matrix &obj);
    friend void operator<<(ostream &out, Matrix &obj);
};
void operator>>(istream &in, Matrix &obj)
{
    int i,j;
    for(i=0;i<obj.m;i++)
    {
        for(j=0;j<obj.n;j++)
        {
            in >> obj.p[i][j];
        }
    }
}

void operator<<(ostream &out, Matrix &obj)
{
    int i,j;
    for(i=0;i<obj.m;i++)
    {
        for(j=0;j<obj.n;j++)
        {
            out << obj.p[i][j] << " ";
        }
        out << endl;
    }
}

int main()
{
    Matrix obj;
    cin >> obj;
    int sum = obj;
    cout << sum << endl;
    int Count;
    cin >> Count;
    obj=Count;
    cout << obj;
    return 0;
}
