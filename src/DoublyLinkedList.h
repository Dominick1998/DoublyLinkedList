#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList {
public:
    Node* front;
    Node* last;

    DoublyLinkedList() {
        front = NULL;
        last = NULL;
    }

    void addNewNodeToFront(Node* n) {
        if (front == NULL) {
            front = n;
            last = n;
        } else {
            n->next = front;
            front->prev = n;
            front = n;
        }
    }

    void addNewNodeToBack(Node* n) {
        if (front == NULL && last == NULL) {
            front = n;
            last = n;
        } else {
            last->next = n;
            n->prev = last;
            last = n;
        }
    }

    void DrawDoublyLinkedList() {
        Node* temp = front;
        while (temp != NULL) {
            cout << "[address: " << temp << " prev: " << temp->prev << " value: " << temp->data << " next: " << temp->next << "]" << endl;
            temp = temp->next;
        }
    }
};
