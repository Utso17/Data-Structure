//linklist queue .....////

#include<iostream>
using namespace std;
typedef struct ListNode
{
    int data;
    struct ListNode *next;
}*nodeptr;
nodeptr head=NULL,curr;


void Display(nodeptr ptr)
{

    while (ptr != NULL)
    {
    cout<<ptr->data<<" ";
    ptr=ptr->next;
    }
	cout<<endl;

}


void enqueue(int item)
{
     nodeptr newNode= new ListNode;
     newNode->data=item;
     newNode->next=NULL;
     if(head==NULL)

     head=newNode;
     else
     curr->next =newNode;
     curr=newNode;
}

void dequeue()
{
    nodeptr ptr = head;
    head= ptr->next;
    delete(ptr);

}

int main()
{
    int n,data;
    cout<<"How many data to push ?"<<endl;
    cin>>n;
    cout<<"Enter the data"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>data;
        enqueue(data);
    }
    Display(head);
    dequeue();
    dequeue();
    Display(head);
    return 0;
}
