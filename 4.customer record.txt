#include<iostream>
using namespace std;

struct customer
{
    int serial;
    int age;
    string number;
    string name;
    string date;
};

int main()
{
    customer bio[10];
    bio[0]={1, 25, "017122222", "Akash", "1:10:2019"};
    bio[1]={2, 30, "017233333", "Alam", "29:0:2019"};

    for(int i=0; i<2; i++)
    {
        cout<<"No: "<<bio[i].serial<<endl;
        cout<<"Name: "<<bio[i].name<<endl;
        cout<<"Age: "<<bio[i].age<<endl;
        cout<<"Phone Number: "<<bio[i].number<<endl;
        cout<<"Purchase date: "<<bio[i].date<<endl;

        cout<<"........Thank You........"<<endl;


    }
}
