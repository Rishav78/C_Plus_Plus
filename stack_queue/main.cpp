#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

class List
{
protected:
  int *Array,Size;
public:
  virtual void store(int x)=0;
  virtual void retrieve()=0;
};
class Stack : public List
{
public:
	Stack()
    {
    	Array = new int[10];
        Size=0;
    }
    void store(int x)
    {
    	Array[Size++]=x;
    }
    void retrieve()
    {
    	cout << Array[Size-1] << endl;
        --Size;
    }
    bool Size_v()
    {
        if(Size>0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

class Queue : public List
{
public:
	Queue()
    {
    	Array = new int[10];
        Size=0;
    }
    void store(int x)
    {
    	Array[Size++]=x;
    }
    void retrieve()
    {
    	int i;
        cout << Array[0] << endl;
    	for(i=1;i<Size;i++)
        {
        	Array[i-1]=Array[i];
        }
        --Size;
    }
    bool Size_v()
    {
        if(Size>0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

};
int main()
{
    int num,choose,no;
    Stack obj;
    Queue obj1;
    cin >> num;
    if(num==1)
    {
        do
        {
            cin >> choose;
            if(choose == 1)
            {
                cin >> no;
                obj.store(no);
            }
            else
            {
                obj.retrieve();
            }
        }while(obj.Size_v());
    }
    else
    {
        do
        {
            cin >> choose;
            if(choose == 1)
            {
                cin >> no;
                obj1.store(no);
            }
            else
            {
                obj1.retrieve();
            }
        }while(obj1.Size_v());
    }
    return 0;
}
