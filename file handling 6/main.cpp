#include <iostream>
#include<fstream>
#include<istream>
#include<vector>
using namespace std;


#include<vector>
void printPoemWithStars(char fn[100], int width)
{
  ifstream is;
    vector <string>obj;
    int len=1,i,n;
    char ch,dup;
    n = width;
    is.open(fn);
    ch = is.get();
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            obj.push_back("*");
        }
        else
        {
            obj[obj.size()-1] = obj[obj.size()-1] + "*";
        }
    }
    while(!is.eof())
    {
        if(len==1)
        {
            obj.push_back("*");
        }
        if(ch=='\n' && len<n)
        {
          obj[obj.size()-1] = obj[obj.size()-1] + ' ';
            while(len<(n-2))
            {
                obj[obj.size()-1] = obj[obj.size()-1] + ' ';
                len++;
            }
            obj[obj.size()-1] = obj[obj.size()-1] + "*";
            len=1;
        }
        else
        {
            len++;
          if(ch==' ')
        	{
            	obj[obj.size()-1] = obj[obj.size()-1] + ch;
        	}
        	else if(len>2)
        	{
            	if(ch>=65 && ch<=90)
            	{
                	obj[obj.size()-1] = obj[obj.size()-1] + char(ch+32);
            	}
          		else if(ch=='\n')
          		{
            		obj[obj.size()-1] = obj[obj.size()-1] + " ";
          		}
            	else
            	{
                	obj[obj.size()-1] = obj[obj.size()-1] + ch;
            	}
        	}
        	else
        	{
            	if(ch>=65 && ch<=90)
            	{
                	obj[obj.size()-1] = obj[obj.size()-1] + ch;
            	}
          		else if(ch=='\n')
          		{
            		obj[obj.size()-1] = obj[obj.size()-1] + " ";
          		}
            	else
            	{
                	obj[obj.size()-1] = obj[obj.size()-1] + char(ch-32);
            	}
        	}
        }
        ch = is.get();
    }
    for(i=obj[obj.size()-1].size();i<n-1;i++)
    {
        obj[obj.size()-1] = obj[obj.size()-1] + ' ';
    }
    obj[obj.size()-1] = obj[obj.size()-1] + '*';
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
           obj.push_back("*");
        }
        else
        {
            obj[obj.size()-1] = obj[obj.size()-1] + '*';
        }
    }
    for(i=0;i<obj.size();i++)
    {
        cout << obj[i] << endl;
    }
}

int main()
{
    char str[100];
    int n;
    cin >> str >> n;
    printPoemWithStars(str,n);
    return 0;
}
