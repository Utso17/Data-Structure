#include <iostream>
using namespace std;

struct Node {
	int data;
	struct Node* link;
};

struct Node* top;

void push(int data)
{
	struct Node* temp;
	temp = new Node();
	if (!temp) {
		cout << "Stack Overflow";
		return;
	}
	temp->data = data;
	temp->link = top;
	top = temp;
}

int isEmpty()
{
	return top == NULL;
}

void peek()
{
	if (!isEmpty())
		cout << "Top of stack: " << top->data << endl;
    else
        cout << "Stack is empty " << endl;

}
void pop()
{
	struct Node* temp;
	if (top == NULL) {
		cout << "\nStack Underflow" << endl;
	}
	else {
		temp = top;
		top= top->link;
        temp->link = NULL;
	}
}
void display()
{
	struct Node* temp;
    if (top == NULL) {
		cout << "\nStack Underflow";
	}
	else {
		temp = top;
		while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->link;
		}
	}
	cout << endl;
}

int main()
{
	push(1);
	push(2);
	push(3);
	push(4);

    display();

	pop();
	pop();

    display();
	peek();
	return 0;

}
