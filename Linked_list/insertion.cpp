#include <iostream>
using namespace std;

struct Node { // Node structure definition
  int data;
  struct Node* next; 
};

//Inserting new node at the end of the linked list

Node* insertAtEnd(Node*& head, int data) {
  Node *ptr = head;
  while (ptr-> next != NULL){
    ptr = ptr -> next;
  }
  Node *cn = (Node*)malloc(sizeof(Node));
  cn->data = data;
  cn->next = NULL;
  ptr->next = cn;

  return head;
}

int main() {
  Node* head = (Node*)malloc(sizeof(Node));
  head->data = 10;
  head->next = NULL;

  Node* c1 = (Node*)malloc(sizeof(Node));
  c1->data = 20;
  c1->next = NULL;

  Node* c2 = (Node*)malloc(sizeof(Node));
  c2->data = 30;
  c2->next = NULL;

  Node* c3 = (Node*)malloc(sizeof(Node));
  c3->data = 40;
  c3->next = NULL;

  head->next = c1;
  c1->next = c2;
  c2->next = c3;
  int d;
  cout<<"Enter data to add in new node";
  cin>>d;
  head = insertAtEnd(head, d);
  cout<<"Data is all nodes are";
  Node* c = head; 
  while (c != NULL) {
    cout << c->data << endl;
    c = c->next;
  }

  return 0;
}