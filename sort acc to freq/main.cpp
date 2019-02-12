#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,k=0,Count=1,pos=0,Min,Min2=0;
    cin >> n;
    int *p = new int[n];
    int *dup = new int[n];
    for(int i=0;i<n;i++)
    {
        cin >> p[i];
    }
    sort(p,p+n);
    for(int i=0;i<n;)
    {
        if(p[i]==p[i+1])
        {
            Count++;
            for(int j=i+1;j<n;j++)
            {
                p[j-1]=p[j];
            }
            --n;
            p[n]=p[n-1]+1;
        }
        else
        {
            dup[k++]=Count;
            Count=1;
            i++;
        }
    }
    pos=0;
    Count=0;
    for(int i=0;i<k;i++)
    {
        cout << dup[i];
    }
    cout << endl;
    for(int i=0;i<k;i++)
    {
        for(int i=0;i<dup[min_element(dup,dup+k) - dup];i++)
        {
            cout << p[min_element(dup,dup+k) - dup];
        }
        *min_element(dup,dup+k)=*max_element(dup,dup+k)+1;
    }
    delete p;
    delete dup;
    return 0;
}
