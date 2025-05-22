#include <iostream>

using namespace std;

// node class representing a single node in the linked list
class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

// stuck class
class Stack
{
private:
    Node *top; // pointer to the top node of the stack

public:
    Stack()
    {
        top = NULL; // Initialize the stack with a null top pointer
    }

    // push operation: insert an element onto the top of the stack
    int push(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << "Push Value: " << value << endl;
        return value;
    }

    // pop operation: Remove  the topmost element from the stack
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
        }

        Node *temp = top; // Create a temporary pointer to the top node
        top = top->next;  // update the top pointer to the next node
        cout << "Popped Value: " << top->data << endl;
    }

    // Peek/Top operation: Retrieve the value of the topmost element without removing
    void peek()
    {
        if (top == NULL)
        {
            cout << "Stack is Empty" << endl;
        }
        else
        {
            Node *current = top;
            while (current != NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        } // Return the value of the top node
    }
// IsEmpty operation: chek if the stck is empty
    bool isEmpty()
    {
        return top == NULL; // Return true if the top pointer is NULL, indication an empty stack
    }
};


    
