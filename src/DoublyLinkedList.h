#include <iostream>
using namespace std;

// Node class definition
class Node {
public:
    int data;      // Data stored in the node
    Node* prev;    // Pointer to the previous node in the list
    Node* next;    // Pointer to the next node in the list

    // Constructor to initialize a node with a given value
    Node(int val) {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

// DoublyLinkedList class definition
class DoublyLinkedList {
public:
    Node* front;   // Pointer to the first node in the list
    Node* last;    // Pointer to the last node in the list

    // Constructor to initialize an empty list
    DoublyLinkedList() {
        front = NULL;
        last = NULL;
    }

    // Function to add a new node to the front of the list
    void addNewNodeToFront(Node* n) {
        if (front == NULL) {  // If the list is empty
            front = n;        // Set front and last to the new node
            last = n;
        } else {              // If the list is not empty
            n->next = front;  // Link the new node to the front
            front->prev = n;  // Link the current front to the new node
            front = n;        // Update the front to the new node
        }
    }

    // Function to add a new node to the back of the list
    void addNewNodeToBack(Node* n) {
        if (front == NULL && last == NULL) {  // If the list is empty
            front = n;                        // Set front and last to the new node
            last = n;
        } else {                              // If the list is not empty
            last->next = n;                   // Link the last node to the new node
            n->prev = last;                   // Link the new node to the last node
            last = n;                         // Update the last to the new node
        }
    }

    // Function to display the list contents
    void DrawDoublyLinkedList() {
        Node* temp = front;  // Start from the front of the list
        while (temp != NULL) {  // Traverse until the end of the list
            cout << "[address: " << temp << " prev: " << temp->prev
                 << " value: " << temp->data << " next: " << temp->next << "]" << endl;
            temp = temp->next;  // Move to the next node
        }
    }
};