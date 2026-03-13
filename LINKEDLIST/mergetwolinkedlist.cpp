#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

Node* mergeLists(Node* l1, Node* l2)
{
    Node* dummy = new Node(0);
    Node* temp = dummy;

    while(l1 != NULL && l2 != NULL)
    {
        if(l1->data < l2->data)
        {
            temp->next = l1;
            l1 = l1->next;
        }
        else
        {
            temp->next = l2;
            l2 = l2->next;
        }

        temp = temp->next;
    }

    if(l1 != NULL)
        temp->next = l1;
    else
        temp->next = l2;

    return dummy->next;
}

void printList(Node* head)
{
    while(head != NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL";
}

int main()
{
    Node* l1 = new Node(1);
    l1->next = new Node(3);
    l1->next->next = new Node(5);
    Node* l2 = new Node(2);
    l2->next = new Node(4);
    l2->next->next = new Node(6);

    Node* merged = mergeLists(l1, l2);

    cout << "Merged List: ";
    printList(merged);

    return 0;
}