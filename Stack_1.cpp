#include<iostream>
using namespace std;

class MyStack{
int Stack[100], top, MaxSize;
public:

MyStack( int Size = 100 )
{
MaxSize = Size; top = 0;
}
bool IsEmpty();
bool IsFull();
bool push( const int Element );
bool pop( int Element );
bool TopElement( int Element );
void Show();
void Reset(){
top = 0; }
};

bool MyStack::push(int Element)
{
    if (top >= (MaxSize - 1)) {
        cout << "Stack Overflow";
        return false;
    }
    else {
        Stack[++top] = Element;
        cout << Element << " pushed into stack\n";
        return true;
    }
}

bool MyStack::pop( int Element )
{
    if(IsEmpty())
    {
        cout<<"Stack is empty"<<endl;
        return false;
    }
    top--;
    return true;

}

bool MyStack::TopElement( int Element )
{
    if (top < 0) {
        cout << "Stack is Empty";
        return 0;
    }
    else {
        int Element = Stack[top];
        return Element;
    }
}

bool MyStack::IsEmpty()
{
    return (top < 0);
}


int main()
{
    class MyStack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();


    return 0;
}




.....................................................


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
    cout << endl;
    pop();
    pop();
    pop();
    show();

    return 0;
}
