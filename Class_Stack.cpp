#include<iostream>
using namespace std;

class MyStack{
int Stack[100], Top, MaxSize;
public:

MyStack( int Size = 100 )
{
MaxSize = Size; Top = 0;
}
bool IsEmpty();
bool IsFull();
bool push( const int Element );
bool pop();
bool TopElement( int Element );
void Show();
void Reset(){
Top = 0; }
};

bool MyStack::IsEmpty()
{
return (Top == 0);
}

bool MyStack::IsFull()
{
return ( Top == MaxSize );
}

bool MyStack::TopElement( int Element )
{
if( IsEmpty() )
        { cout << "Stack empty\n";
        return false; }
        Element = Stack[ Top - 1 ];
        return true;
}

void MyStack::Show( void ){
if( IsEmpty() )
        { cout << "Stack empty\n";
        return; }
        for( int i=Top-1; i>=0; i-- )
        cout << Stack[i] << endl;
}
bool MyStack::push( const int Element)
{
if( IsFull( ) )
        { cout << "Stack is Full\n";
        return false; }
        Stack[ Top++ ] = Element;
   return true;
}

bool MyStack::pop()
{
if( IsEmpty() )
        { cout << "Stack empty\n"; return false; }
        Top-=1;
        return true;
}

int main()
{
    class MyStack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.Show();
    s.pop();
    cout<<"after popping..."<<endl;
    s.Show();

    return 0;
}
