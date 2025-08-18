#include <iostream>
using namespace std;

struct Node { // Node structure definition
  int data;// Each node contains an integer data and a pointer to the next node

  Node* next; // Pointer to the next node in the linked list
  
  Node(int val){// Constructor to initialize the node with a value. It allows you to create a node with a value directly
    data = val;
    next = nullptr; //NULL pointer initialization
  }
};

//Inserting new node at the beginning of the linked list

void insertAtBeginning(Node*& head, int val) {// Reference to the head pointer and the value to be inserted. & is used so changes to head inside this function are reflected outside too.

  Node* newNode = new Node(val); // Create a new node with the given value

  newNode->next = head; // Point the new node's next to the current head
  
  head = newNode; // Update the head to point to the new node
}