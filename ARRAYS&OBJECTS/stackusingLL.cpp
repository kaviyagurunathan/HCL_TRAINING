#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
};

class Stack
{
    Node* top;

public:
    Stack()
    {
        top = NULL;
    }

    void push(int x)
    {
        Node* newNode = new Node();
        newNode->data = x;
        newNode->next = top;
        top = newNode;

        cout << x << " pushed into stack\n";
    }

    void pop()
    {
        if(top == NULL)
        {
            cout << "Stack Underflow\n";
            return;
        }

        Node* temp = top;
        cout << "Popped element: " << top->data << endl;

        top = top->next;
        delete temp;
    }

    void peek()
    {
        if(top == NULL)
        {
            cout << "Stack is empty\n";
        }
        else
        {
            cout << "Top element: " << top->data << endl;
        }
    }

    void display()
    {
        Node* temp = top;

        if(temp == NULL)
        {
            cout << "Stack is empty\n";
            return;
        }

        cout << "Stack elements:\n";

        while(temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main()
{
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.pop();
    s.display();

    s.peek();
}