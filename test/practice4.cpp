#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int d)
    {
        data = d;
        next = NULL;
        prev = NULL;
    }
};
class Doublelinked
{

public:
    Node *head;
    Node *tail;
    Doublelinked()
    {
        head == NULL;
        tail == NULL;
    }
    void insert(int val)
    {
        Node *newnode = new Node(val);
        if (tail == NULL)
        {
            head == newnode;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }
    void deletedata(int todel)
    {
        Node *temp = head;
        while (temp->data != todel && temp->next != NULL)
        {
            temp = temp->next;
        }
        if (temp->next == NULL)
        {
            cout << "element not found" << endl;
            return;
        }
        else
        {
            cout << "deleted" << todel << endl;
        }
        if (temp->prev == NULL)
        {
            head = NULL;
        }
        else
        {
            temp->prev->next = temp->next;
        }
        if (temp->next == NULL)
        {
            tail = NULL;
        }
        else
        {
            temp->next->prev = temp->prev;
            delete (temp);
        }
    }
    void display()
    {
        Node *temp = head;
        if (temp == NULL)
        {
            cout << "element are not present in the listlist\n";
        }
        else
        {
            cout << "element in the linklist are\n";
            while (temp != NULL)
            {
                cout << temp->data << "->";
                temp = temp->next;
            }
        }
    }
};

int main()
{
    Doublelinked d;
    cout << endl
         << "inserting 75:" << endl;
    d.insert(75);
    cout << "inserting 95:" << endl;
    d.insert(95);
    cout << "inserting 63:" << endl;
    d.insert(63);
    cout << "inserting 39:" << endl;
    d.insert(39);
    cout << "inserting 69:" << endl;
    d.insert(69);
    cout << "inserting 37:" << endl;
    d.insert(37);
    cout << "inserting 12:" << endl;
    d.insert(12);
    cout << "inserting 23:" << endl;
    d.insert(23);
    d.display();
    cout << endl
         << "deleting:95" << endl;
    d.deletedata(95);
    cout << "deleting:69" << endl;
    d.deletedata(69);
    cout << "deleting:12" << endl;
    d.deletedata(12);
    cout << "deleting:112" << endl;
    d.deletedata(112);
    cout << "deleting:77" << endl;
    d.deletedata(77);
    d.display();
    return 0;
}