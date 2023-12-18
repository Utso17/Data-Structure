LL one way

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
    ptr=ptr->next ;
    }
	cout<<endl;

}


void push(int item)
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

void pop()
{
    nodeptr ptr=head, dptr;
    while(ptr->next->next!=NULL)
        ptr=ptr->next;
    dptr= ptr->next;
    ptr->next = NULL;
    delete dptr;
    curr = ptr;

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
        push(data);
    }
    Display(head);
    pop();
    pop();
    Display(head);
    return 0;
}
