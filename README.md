# CPSC 2380-9H1: Algorithms - Project 1: Doubly Linked List

## Overview
This project implements a doubly linked list in C++. The doubly linked list allows for adding nodes to the front or back of the list and includes a method to draw the list.

## Project Details
**Course**: CPSC 2380-9H1: Algorithms  
**Instructor**: Dr. Chia-Chu Chiang  
**University**: University of Arkansas at Little Rock  
**Date**: April 20, 2021  
**Author**: Dominick Ferro  

## Description
- **Node Class**: Represents a node in the doubly linked list with data, a pointer to the next node, and a pointer to the previous node.
- **DoublyLinkedList Class**: Represents the doubly linked list with pointers to the first and last nodes in the list. It includes methods to add new nodes to the front or back of the list and to draw the list.

## Files
- `src/DoublyLinkedList.h`: Header file for the doubly linked list and node classes.
- `src/DoublyLinkedList.cpp`: Implementation file for the doubly linked list methods.
- `src/Node.h`: Header file for the node class.
- `src/Node.cpp`: Implementation file for the node class.
- `src/main.cpp`: Main program file to test the doubly linked list implementation.

## How to Run
1. **Compile the code**:
   ```sh
   g++ src/main.cpp src/DoublyLinkedList.cpp src/Node.cpp -o DoublyLinkedList
   ```

2. **Run the executable**:
   ```sh
   ./DoublyLinkedList
   ```
