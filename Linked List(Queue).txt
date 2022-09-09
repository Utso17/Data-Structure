#include<iostream>
using namespace std;
typedef struct ListNode
{
    int data;
    struct ListNode *next;
}*nodeptr;
nodeptr head=NULL,curr;

void enqueue(int i)
{
     nodeptr newNode= new ListNode;
     newNode->data=i;
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
void print(nodeptr ptr)
{

    while (ptr != NULL)
    {
    cout<<ptr->data<<" ";
    ptr=ptr->next;
    }
	cout<<endl;

}
int isEmpty()
{
	return head == NULL;
}

void Front()
{
	if (!isEmpty())
		cout << "Front of queue: " << head->data << endl;
    else
        cout << "Queue is empty " << endl;

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
    print(head);
    dequeue();
    dequeue();
    print(head);
    Front();
    return 0;
}
