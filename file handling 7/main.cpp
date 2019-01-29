#include <iostream>
#include<fstream>
#include<vector>
#include<string>
using namespace std;

void printMostFollowed(string ob)
{
    ifstream is;
    string obj[20][2];
    int m=0,n=0,i,j,Count=0,k;
    int *ob1;
    char ch;
    is.open(ob.c_str());
    ch=is.get();
    while(!is.eof())
    {
        if(ch==' ')
        {
            n++;
        }
        else if(ch=='\n' && obj[m][1].size()>0)
        {
            m++;
            n=0;
        }
        else
        {
            if(ch!='\n')
                obj[m][n] = obj[m][n] + ch;
        }
        ch = is.get();
    }
    ob1 = new int[m];
    for(i=0;i<m;i++){ob1[i]=0;}
    for(i=0;i<=m;i++)
    {
        Count=0;
        for(j=i;j<=m;j++)
        {
            if(obj[i][1]==obj[j][1] && ob1[i]!=-1)
            {
                if(i!=j)
                {
                    ob1[j]=-1;
                }
                for(k=0;k<=m;k++)
                {
                    if(obj[k][1]==obj[j][0])
                    {
                        Count++;
                    }
                }
            }
        }
        if(ob1[i]!=-1)
            ob1[i]=Count;
    }
    k=ob1[0];
    j=0;
    for(i=0;i<=m;i++)
    {
        if(ob1[i]>k && ob1[i]!=-1)
        {
            k=ob1[i];
            j=i;
        }
    }
    cout << obj[j][1];
    cout << ob1[j];
    delete ob1;
}

int main()
{
    string s;
    cin >> s;
    printMostFollowed(s);
    return 0;
}
