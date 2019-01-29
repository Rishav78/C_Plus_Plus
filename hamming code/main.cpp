#include <iostream>
#include<cmath>
using namespace std;

class Hamming
{
    int num,Size;
    int *hamming_code;
public:
    Hamming(){}
    Hamming(int num, int Size)
    {
        int i;
        this->Size = Size;
        hamming_code = new int[Size];
        this->num = num;
        for(i=0;i<Size;i++)
        {
            hamming_code[i]=0;
        }
    }
    bool check_pow(int x)
    {
        int i;
        for(i=0;i<=sqrt(Size);i++)
        {
            if(pow(2,i)==x)
            {
                return false;
            }
            else if(pow(2,i)>x)
            {
                break;
            }
            else{}
        }
        return true;
    }
    int check_priority(int x)
    {
        int i,j,Count=0;
        for(i=x-1;i<Size;i=i+x+x)
        {
            for(j=i;j<(i+x);j++)
            {
                if(j>=Size)
                {
                    i=i+x;
                    break;
                }
                if(check_pow(j+1)==true && hamming_code[j]==1)
                {
                    Count++;
                }
            }
            if(j!=(i+x))
            {
                break;
            }
        }
        return Count;
    }
    int Generate()
    {
        int i=0,temp=num,j;
        while(temp>0)
        {
            for(;i<Size;i++)
            {
                if(check_pow(i+1)==true)
                {
                    hamming_code[i]=temp%2;
                    temp=temp/2;
                    i++;
                    break;
                }
            }
            if(i>=(Size) && temp>0)
            {
                cout << "Overflow";
                return 0;
            }
        }
        for(i=0;i<Size;i++)
        {
            for(j=1;j<=Size;j++)
            {
                if(pow(2,i)==j)
                {
                    if(check_priority(j)%2==0)
                    {
                        hamming_code[j-1]=0;
                    }
                    else
                    {
                        hamming_code[j-1]=1;
                    }
                    break;
                }
            }
        }
        return 1;
    }
    void Display()
    {
        int i;
        cout << "Based upon even priority: " << endl;
        for(i=0;i<Size;i++)
        {
            cout << hamming_code[i] << " ";
        }
        cout << endl;
        for(i=0;i<Size;i++)
        {
            cout<< i+1 << " ";
        }
    }
    ~Hamming()
    {
        delete hamming_code;
    }
};

int main()
{
    int x,Size;
    Hamming obj;
    cout << "Select of the followng" << endl << endl;
    cout << "7 Bits Hamming Code" << endl;
    cout << "15 Bits Hamming Code" << endl << endl;
    cout << "Enter 7/15: ";
    cin >> Size;

    if(Size==7 || Size==15)
    {
        cout << "\n\nEnter the number which you wanna Convert: ";
        cin >> x;
        obj = Hamming(x,Size);
        if(obj.Generate()==1)
        {
            obj.Display();
        }
        else
        {
            return 0;
        }
    }
    else
    {
        cout << "\nWrong Input";
    }
    return 0;
}
