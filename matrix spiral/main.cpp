#include <iostream>

using namespace std;

class Matrix
{
    int **p,r,c;
public:
    Matrix()
    {
        int i,j;
        cin >> r >> c;
        p = new int*[r];
        for(i=0;i<r;i++)
        {
            p[i] = new int[c];
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                cin >> p[i][j];
            }
        }
    }
    void Spiral_o()
    {
        int i,j,k,l,temp=r,m;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                cout << p[i][j] << " ";
            }
            cout << endl;
        }
        if(temp%2!=0)
        {
            ++temp;
        }
        for(i=0;i<temp/2;i++)
        {
            for(j=i;j<(c-i);j++)
            {
                cout << p[i][j] << endl;
            }
            for(k=i+1;k<r-i;k++)
            {
                cout << p[k][j-1] << endl;
            }
            for(l=j-2;l>i && r!=1;l--)
            {
                cout << p[k-1][l] << endl;
            }
            for(m=r-1-i;m>i && c!=1;m--)
            {
                cout << p[m][i] << endl;
            }
        }
    }
};

int main()
{
    Matrix obj;
    obj.Spiral_o();
    return 0;
}
