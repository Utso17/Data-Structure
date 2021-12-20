#include<iostream>
using namespace std;

int main()
{
int i,j,x,y;
int A[x][y];

cout<<"Enter the values of x and y:"<<endl;
cout<<"Enter x:";
cin>>x;
cout<<"Enter y:";
cin>>y;
cout<<".........."<<endl;

for(int i=0; i<x; i++)
{
    for (int j=0; j<y; j++)
    {
       cin>>A[x][y];
    }
}

//works till now but can't print using the help of pointer.

int *p;
p=A;

for(int i=0; i<x; i++)
{
    for (int j=0; j<y; j++)
    {
        cout<<"values:"<<*p<<endl;
    }

return 0;
}
