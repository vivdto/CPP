#include <iostream>
using namespace std;

// Forward declaration of List class to make it a friend of Node class
class List;

// Define a class Node to represent individual nodes in a linked list.
class Node {
    int data;       // Data stored in the node
    Node* next;     // Pointer to the next node in the list

public: 
    // Constructor to initialize a Node with given data and next as NULL
    Node(int d): data(d), next(NULL) {} // Using initializer list for efficient initialization

    // Friend declaration to allow List class access private members of Node
    friend class List;
};

// Define a class List to represent a linked list consisting of nodes.
class List {
    Node* head;     // Pointer to the first node in the list
    Node* tail;     // Pointer to the last node in the list

public:
    // Constructor to initialize an empty list with head and tail as NULL
    List(): head(NULL), tail(NULL) {}

    // Function to add a new node with data at the front of the list
    void push_front(int data) {
        if (head == NULL) { // If the list is empty
            Node* n = new Node(data);  // Create a new node with the given data
            head = tail = n;  // Set both head and tail to point to the new node
        } else { // If the list is not empty
            Node* n = new Node(data);  // Create a new node with the given data
            n->next = head; // Set the new node's next pointer to point to the current head
            head = n; // Update the head pointer to point to the new node
        }
    }

    // Function to add a new node with data at the end of the list
    void push_back(int data) {
        if (head == NULL) { // If the list is empty
            Node* n = new Node(data);  // Create a new node with the given data
            head = tail = n;  // Set both head and tail to point to the new node
        } else { // If the list is not empty
            Node* n = new Node(data); // Create a new node with the given data
            tail->next = n; // Set the current tail's next pointer to point to the new node
            tail = n; // Update the tail pointer to point to the new node
        }
    }
};

int main() {
    List l;
    l.push_front(1); // Add 1 to the front of the list
    l.push_back(2);  // Add 2 to the back of the list

    return 0;
}
