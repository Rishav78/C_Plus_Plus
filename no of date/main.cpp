#include<iostream>

using namespace std;

class StackSorted
{
int *element;
int size;
int capacity;
 public:
   StackSorted()
   {
   	size=0;
    capacity=5;
    element = new int[5];
   }
    bool isEmpty() const
    {
    	if(size==0)
        {
        	return true;
        }
        return false;
    }
    int peek() const
    {
    	if(size==0)
        {
        	cout << "error" <<endl;
            return 0;
        }
    	return element[size-1];
    }
    int pop()
    {
    	int ele,i;
    	if(size==0)
        {
        	cout << "error" <<endl;
            return 0;
        }
        ele = element[0];
        for(i=1;i<size;i++)
        {
        	element[i-1] = element[i];
        }
        size--;
        return ele;
    }
    void push(int n)
    {
    	int *p,i,j;
        if(size==0)
        {
            element[size++] = n;
        }
        else
        {
            if((size-1)>=capacity)
            {
                p = new int[size];
                for(i=0;i<size;i++)
                {
                    p[i]=element[i];
                }
                delete element;
                element = new int[size+5];
                for(i=0;i<size;i++)
                {
                    element[i]=p[i];
                }
                delete p;
                for(i=size-1;i>=0;i--)
                {
                    if(element[i]<n)
                    {
                        element[i+1]=n;
                        break;
                    }
                    else
                    {
                        element[i+1]=element[i];
                    }
                }
                capacity+=5;
            }
            else
            {
                size++;
                element[size-1]=n;

                for(i=0;i<size;i++)
                {
                    for(j=1;j<size;j++)
                    {
                        if(element[j-1]>element[j])
                        {
                            element[j-1] += element[j];
                            element[j] =  element[j-1] - element[j];
                            element[j-1]-=element[j];
                        }
                    }
                }
            }
        }
        /*
        while(ArrayStack::pop()!=false)
        {}
        for(i=0;i<size;i++)
        {
            ArrayStack::push(element[i]);
        }*/
    }
    void Display()
    {
        int i;
        for(i=0;i<size;i++)
        {
            cout << element[i] << endl;
        }
    }
    ~StackSorted()
    {
        delete element;
    }
};

int main()
{
    StackSorted obj;
    int c;
    while(true)
    {
            cin >> c;
            if(c==-1)
            {
                obj.Display();
                break;
            }
            obj.push(c);
    }
}
