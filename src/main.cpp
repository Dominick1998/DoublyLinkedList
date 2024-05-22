#include <iostream>          // Include the input-output stream library
using namespace std;         // Use the standard namespace

#include "DoublyLinkedList.h" // Include the header file for the DoublyLinkedList class

int main() {
    // Create an instance of DoublyLinkedList
    DoublyLinkedList Dll_1;

    // Create nodes with specific values
    Node n11(10);
    Node n12(20);
    Node n13(30);
    Node n14(40);
    Node n15(50);

    // Add nodes to the doubly linked list in various positions
    Dll_1.addNewNodeToFront(&n11); // Add node n11 to the front of the list
    Dll_1.addNewNodeToBack(&n12);  // Add node n12 to the back of the list
    Dll_1.addNewNodeToFront(&n13); // Add node n13 to the front of the list
    Dll_1.addNewNodeToBack(&n14);  // Add node n14 to the back of the list
    Dll_1.addNewNodeToFront(&n15); // Add node n15 to the front of the list

    // Draw the current state of the doubly linked list
    Dll_1.DrawDoublyLinkedList();
    cout << endl; // Output a newline for better readability

    // Return 0 to indicate successful execution
    return 0;
}