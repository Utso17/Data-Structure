#include <iostream>
using namespace std;

int stack[100], MaxSize=100, top=0;
bool isEmpty();
bool isFull();
bool pop();
bool push(const int item);
void TopElement();
void show();

bool isEmpty()
{
    return (top==0);
}
bool isFull()
{
    return (top==MaxSize);
}
bool push(const int item)
{
    if(isFull())
    {
        cout<<"Stack is full"<<endl;
        return false;
    }
    stack[top++]=item;
    return true;
}
bool pop()
{
    if(isEmpty())
    {
        cout<<"Stack is empty"<<endl;
        return false;
    }
    top--;
    return true;

}
void show()
{
    for(int i=top-1; i>=0; i--)
    {
        cout << stack[i] << " ";
    }
}
void TopElement()
{
    cout << "Top element:  "<<stack[top-1] << endl;
}

int main ()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    show();
    cout <<"\nAfter popping"<< endl;
    pop();
    pop();
    pop();
    show();

    return 0;
}
