#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data; // Each node contains an integer data
    Node* next; // Pointer to the next node in the linked list

    Node(int data1) { // Constructor to initialize the node with a value
      data = data1;
      next = nullptr; // Initialize next pointer to nullptr
    }
};
