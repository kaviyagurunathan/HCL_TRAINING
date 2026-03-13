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

void splitList(Node* head, Node** head1, Node** head2)
{
    Node* slow = head;
    Node* fast = head;

    while(fast->next != head && fast->next->next != head)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    if(fast->next->next == head)
        fast = fast->next;

    *head1 = head;
    *head2 = slow->next;

    fast->next = slow->next;
    slow->next = head;
}

void printList(Node* head)
{
    Node* temp = head;

    if(head != NULL)
    {
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        while(temp != head);
    }

    cout << endl;
}

int main()
{
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    head->next->next->next->next->next = head;

    Node* head1 = NULL;
    Node* head2 = NULL;

    splitList(head, &head1, &head2);

    cout << "First Circular List: ";
    printList(head1);

    cout << "Second Circular List: ";
    printList(head2);

    return 0;
}