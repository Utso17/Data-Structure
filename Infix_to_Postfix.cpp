//Tanvir Reza Utso
//18-38112-2


#include<iostream>
using namespace std;
char stk[10];
int top=-1;



void push(char x)
{
    top=top+1;
    stk[top]=x;
}

char pop()
{
    char data;
    if(top==-1)
        return -1;
    else
    {
        data=stk[top];
        top--;
        return data;
    }
}

int priority(char x)
{
    if(x=='(')
        return 0;
    else if(x=='+'||x=='-')
        return 1;
    else if(x=='*'||x=='/')
        return 2;
    else return -1;
}

int main()
{
    cout<<"***Infix expression to Postfix***"<<endl;
    char x;
    char exp[100];
    cout<<"\n Enter the Infix expression: "<<endl;
    char *e;
    cin>>exp;
    e=exp;

    while(*e!='\0')
    {
        if(isalnum(*e))
            cout<<*e;
        else if(*e=='(')
            push(*e);
        else if(*e==')')
        {
            while((x=pop())!='(')
                    cout<<x;
        }
        else
        {
            while(priority(stk[top])>=priority(*e))
                cout<<pop();
                push(*e);
        }
        e++;
    }
    while(top!=-1)
    {
        cout<<pop();
    }
}
