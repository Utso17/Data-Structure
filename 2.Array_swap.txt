#include<iostream>
using namespace std;
int main()
{
    int *A,*B,temp,x;
    cout<<"How many numbers to be entered in array : ";
    cin>>x;
    A=new int[x];
    B=new int[x];
    cout<<"Enter First array : ";
    for(int i=0;i<x;i++)
        cin>>A[i];
    cout<<"Enter Second array : ";
    for(int i=0;i<x;i++)
        cin>>B[i];

    for(int i=0;i<x;i++)
    {
        temp=*(A+i);
        *(A+i)=*(B+i);
        *(B+i)=temp;
    }
    cout<<endl<<endl<<"After swapping "<<endl<<"First Array : ";
    for(int i=0;i<x;i++)
        cout<<A[i]<<" ";
    cout<<endl<<"Second Array : ";
    for(int i=0;i<x;i++)
        cout<<B[i]<<" ";
    cout<<endl;
    return 0;
}
