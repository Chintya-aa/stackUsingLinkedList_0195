#include <iostream>

using namespace std;

//node class representing a single node in the linked list
class Node {
    public:
        int data;
        Node* next;

        Node()
        {
            next = NULL;
        }
}; 

//stuck class
class Stack
{
    private:
        Node* top; // pointer to the top node of the stack

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