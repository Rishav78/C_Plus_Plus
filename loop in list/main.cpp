#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

/* struct Node
{
    int data;
    struct Node* next;
};

Above structure is used to define the linked list, You have to complete the below functions only */

int findMiddle(struct Node* head)
{
	static int len=0,mid=-1,value;
  len++;
  if(head==NULL)
  {
    mid=len;
    len = len + len%2;
    return -1;
  }
  findMiddle(head->next);
  mid--;
  if(mid==len/2)
  {
    value=head->data;
  }
  return value;
}

int findNLast(struct Node* head, int n)
{
  static int len,value=-1;
  if(head==NULL)
  {
    return -1;
  }
  findNLast(head->next,n);
  len++;
  if(len==n)
  {
    value=head->data;
  }
  return value;
}




/*int  loopInList(struct Node* head)
{
  for(struct Node *start = head;start!=NULL;start=start->next)
  {
    int count=0;
  	for(struct Node *ptr = start->next;ptr!=NULL;ptr=ptr->next)
    {
      	count++;
		if(ptr==start)
        {
          return count;
        }
    }
  }
  return 0;
}*/

int main()
{
    int n;
    cin >> n;
    Node *ptr;
    Node *head = new Node;
    ptr=head;
    head->data = 1;
   while(--n)
   {
       ptr->next = new Node;
       ptr=ptr->next;
       cin >> ptr->data;
       ptr->next=NULL;
   }
    cout << findMiddle(head);
    return 0;
}
