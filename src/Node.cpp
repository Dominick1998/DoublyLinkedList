#include "Node.h" // Include the header file for the Node class

// Default constructor
// Initializes the node with default values
Node::Node() : prev(NULL), value(0), next(NULL) {
    // prev is set to NULL indicating no previous node
    // value is initialized to 0
    // next is set to NULL indicating no next node
}

// Parameterized constructor
// Initializes the node with a specific value
Node::Node(int v) : prev(NULL), value(v), next(NULL) {
    // prev is set to NULL indicating no previous node
    // value is set to the provided value v
    // next is set to NULL indicating no next node
}

// Destructor
// Cleans up the node when it is no longer needed
Node::~Node() {
    // Destructor implementation (currently empty as there are no dynamic allocations)
}
