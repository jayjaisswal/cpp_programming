#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};
class Linkedlist
{
public:
    Node *head;
    Linkedlist()
    {
        head == NULL;
    }
    void insert(int val)
    {
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
            return;
        
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    void deletedata(int todel)
    {
        Node *temp = head;
        Node *prev;
        while (temp->data != todel && temp->next!= NULL)
        {
            prev = temp;
            temp = temp->next;
        }
        if (temp->next == NULL)
        {
            cout << "Element is not found\n";
        }
        else
        {
            cout << "deleted" << todel;
            prev->next = temp->next;
            delete (temp);
        }
    }
    void display()
    {
        Node *temp = head;
        if (temp == NULL)
        {
            cout << "no element are present in the linked list\n";
        }
        else
        {
            cout << "the element present in te linked list are\n";
            while (temp != NULL)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
        }
    }
};

int main()
{
    Linkedlist l;
    cout << "inseting 34" << endl;
    l.insert(34);
    cout << "inseting 76" << endl;
    l.insert(76);
    cout << "inseting 12" << endl;
    l.insert(12);
    cout << "inseting -98" << endl;
    l.insert(-98);
    cout << "inseting 63" << endl;
    l.insert(63);
    l.display();

    cout << endl
         << "deleting 76 from linked list:" << endl;
    l.deletedata(76);
    cout << "deleting -98 from linked list:" << endl;
    l.deletedata(-98);
    cout << "deleting 45 from linked list:" << endl;
    l.deletedata(45);
    l.display();
    return 0;
}