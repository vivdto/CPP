/*

#include <iostream>
using namespace std;

// Define a class Node to represent individual nodes in a linked list.
class Node {
    int data;       // Data stored in the node
    Node* next;     // Pointer to the next node in the list

public: 
    // Constructor to initialize a Node with given data and next as NULL
    Node(int d): data(d), next(NULL) {} // Using initializer list for efficient initialization
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

    void push_back(int data)
    {
       if (head == NULL) { // If the list is empty
            Node* n = new Node(data);  // Create a new node with the given data
            head = tail = n;  // Set both head and tail to point to the new node
        } else {  

                       Node* n = new Node(data);

                      tail->next = n;

                      tail = n;
        
    }

};


Node Class:

Represents individual nodes in a linked list.
Contains two private members: int data to store data in the node, and Node* next as a pointer to the next node in the list.
Provides a constructor Node(int d) that initializes a node with the given data and sets the next pointer to NULL using an initializer list for efficiency.
List Class:

Represents a linked list consisting of nodes.
Contains two private members: Node* head as a pointer to the first node in the list, and Node* tail as a pointer to the last node in the list.
Provides a constructor List() that initializes an empty list with both head and tail set to NULL.
push_front Function:

Adds a new node with given data at the front of the list.
Checks if the list is empty (head == NULL), and if so, creates a new node with the given data and sets both head and tail to point to this new node.
If the list is not empty, creates a new node with the given data, sets its next pointer to the current head, and updates the head pointer to point to this new node.
*/



#include <iostream>
using namespace std;

// Define a class Node to represent individual nodes in a linked list.
class Node {
    int data;       // Data stored in the node
    Node* next;     // Pointer to the next node in the list

public: 
    // Constructor to initialize a Node with given data and next as NULL
    Node(int d): data(d), next(NULL) {} // Using initializer list for efficient initialization
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

    void push_back(int data)
    {
       if (head == NULL) { // If the list is empty
            Node* n = new Node(data);  // Create a new node with the given data
            head = tail = n;  // Set both head and tail to point to the new node
        } else {  

                       Node* n = new Node(data);

                      tail->next = n;

                      tail = n;
        
    }

};
