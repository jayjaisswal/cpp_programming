#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        next = NULL;
        data = d;
    }
};
class stack
{

public:
    Node *top;
    stack()
    {
        top == NULL;
    }
    void insert(int val)
    {
        Node *newnode = new Node(val);
        if (top == NULL)
        {
            top = newnode;
        }
        else
        {
            newnode->next = top;
            top = newnode;
        }
    }

    void deletedata()
    {
        Node *temp = top;
        if(temp==NULL)
        {
            cout<<"No element are present\n";
            return;
        }
        else{
            top=top->next;
            cout<<"deleted"<<temp->data<<endl;
            delete(temp);
        }
    }
};
int main()
{

    return 0;
}