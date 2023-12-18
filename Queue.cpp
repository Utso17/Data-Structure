//Tanvir Reza Utso
//18-38112-2


#include<iostream>
using namespace std;
#define size 100
int queue[size];

int front= -1;
int rear= -1;

bool isEmpty (void)
{
return (front==0);
}

bool IsFull( void ){
return ( front == size );
}
void enqueue(int item)
{
if(rear==size-1)
cout<<"queue is full";
else
    {rear++;
    queue[rear] = item;
if(front == -1)
front++;
    }
}
int dequeue()
{
    if (front == -1 || front>rear)
cout << "Queue is empty";
 else
{
   cout<<"\n Item dequeued!\n";
   int item = queue[front];
 front++;
 return item;
  }
}
void showValue()
{
    if (front == -1)
        cout<<"Queue is empty"<<endl;
    else
        cout<<"\nList of elements : "<<endl;
    for(int i=front;i<=rear;i++)
        cout<<queue[i]<<" "<<endl;
}

int FrontValue()
{
    if (front == -1)
        cout<<"Queue is empty"<<endl;
    else
        cout<<"Front value:";
        cout<<queue[0];

}

int main()
{
enqueue(10);
enqueue(20);
enqueue(30);
enqueue(40);
enqueue(50);
FrontValue();
showValue();
dequeue();
dequeue();
showValue();
}
