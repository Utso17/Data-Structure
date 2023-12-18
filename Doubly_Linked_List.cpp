#include <iostream>
using namespace std;

struct node
{
    int val;
    node *next;
    node *prev;
};

class DoublyLinkedList
{
    node *head;
    node *curr;
public:
    DoublyLinkedList(int v)
    {
        head = new node;
        curr = new node;
        head->val = v;
        head->next = NULL;
        head->prev = NULL;
        curr = head;
    }
    void insert_node(int v)
    {
        node *temp;
        temp = new node;
        temp->val = v;
        temp->prev = curr;
        temp->next = NULL;
        curr->next = temp;
        curr = temp;
    }
    void delete_node(int v)
    {
        node *temp;
        temp = new node;
        temp = head;
        if(temp != NULL && temp->val == v)
        {
            head = temp->next;
        }
        while(temp != NULL && temp->val != v)
        {
            temp->prev = temp;
            temp = temp->next;
        }
        temp->prev->next = temp->next;
    }
    void print_list()
    {
        node *n;
        n = head;
        while(n!=NULL)
        {
            cout << n->val << "  ";
            n = n->next;
        }
    }
};


int main()
{
    DoublyLinkedList DL(1);
    DL.insert_node(2);
    DL.insert_node(3);
    DL.insert_node(4);
    DL.insert_node(5);
    DL.print_list();
    cout<<endl;
    DL.delete_node(3);
    DL.print_list();
    return 0;
}
