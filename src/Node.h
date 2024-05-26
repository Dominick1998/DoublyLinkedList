#ifndef NODE_H
#define NODE_H

#include <iostream> // Include the input-output stream library for any potential I/O operations
using namespace std; // Use the standard namespace

// Node class definition
class Node {
    // Declare DoublyLinkedList as a friend class to allow it access to Node's private members
    friend class DoublyLinkedList;

public:
    // Default constructor
    Node();

    // Parameterized constructor to initialize the node with a value
    Node(int v);

    // Destructor
    ~Node();

private:
    Node* prev;   // Pointer to the previous node in the doubly linked list
    int value;    // Value/data stored in the node
    Node* next;   // Pointer to the next node in the doubly linked list
};

#endif // NODE_H
