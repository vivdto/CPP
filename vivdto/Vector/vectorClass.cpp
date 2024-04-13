#include<iostream>
#include<vector>

using namespace std;

class Vector {

// Data Members
int *arr;  // Pointer to the dynamic array
int cs;    // Current size
int ms;    // Maximum size (capacity)

/*
If cs == ms, then perform the doubling operation.
*/

public:

// Constructor to initialize the vector with a given maximum size
Vector(int max_size = 1) {
    cs = 0; 
    ms = max_size; 
    arr = new int[ms];
}

// Method to add an element to the end of the vector
void push_back(int d) {
    // Check if the vector is full, if yes, double the capacity
    if (cs == ms) {
        // Create a new array with doubled capacity and copy elements
        int *oldArr = arr;
        ms = 2 * ms;
        arr = new int[ms];

        for (int i = 0; i < cs; i++) {
            arr[i] = oldArr[i];
        }

        delete[] oldArr; // Free memory occupied by the old array
    }

    arr[cs] = d;
    cs++;
}

// Method to remove an element from the end of the vector
void pop_back() {
    if (cs > 0) {
        cs--; // Decrease the current size (no actual shrinking of array)
    }
}

// Method to check if the vector is empty
bool isEmpty() {
    return cs == 0;
}

// Method to access the first element of the vector
int front() {
    return arr[0];
}

// Method to access the last element of the vector
int back() {
    return arr[cs - 1];
}

// Method to access an element at a specified index
int at(int i) {
    return arr[i];
}

// Method to get the current size of the vector
int size() {
    return cs;
}

// Method to get the current capacity of the vector
int capacity() {
    return ms;
}


};

int main() {
    Vector v;  // Use the constructor with default argument (maximum size 1)
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    
    cout<<v.at(2)<<endl;

    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;


    for (int i = 0; i<v.size(); i++)
    {
        cout<<v.at(i)<<", "<<endl;
    }

    return 0;
}


// CONST -- Constant Function.

/*Amazon SDE 1:

How does the push_back method work in this vector implementation? Describe the process of adding an element to the vector and handling capacity expansion.
Microsoft SDE 1:

Explain the significance of the cs and ms variables in the Vector class. How are they used to manage the size and capacity of the vector?
Google SDE 1:

Discuss the role of the pop_back method in this vector implementation. How does it ensure that the vector remains contiguous in memory while removing elements?
Amazon/Microsoft/Google SDE 1:

Suppose you want to improve the efficiency of the vector class for scenarios where frequent insertions and deletions occur. What modifications or additional methods would you consider adding to achieve this?
Google SDE 1:

In the push_back method, why is it necessary to check if cs == ms before doubling the capacity of the vector? What could happen if this check is not performed?
Microsoft/Google SDE 1:

Describe how you would implement the front, back, and at methods to access elements in the vector. What are the complexities of these operations in terms of time complexity?
Amazon/Microsoft/Google SDE 1:

Suppose you need to handle exceptions or errors in the vector class. How would you modify the code to incorporate exception handling for scenarios such as out-of-bounds access or memory allocation failure?
These questions touch on various aspects of the vector implementation, including memory management, efficiency considerations, error handling, and algorithmic complexities. They should provide a good basis for assessing a candidate's understanding of data structures, algorithms, and coding practices relevant to entry-level software engineering roles.

User
answer them
ChatGPT
Of course! Here are the answers to the questions based on the provided vector implementation:

Amazon SDE 1:

The push_back method in this vector implementation first checks if the current size (cs) is equal to the maximum size (ms). If they are equal, it doubles the capacity of the vector by creating a new array with twice the size (2 * ms), copying the elements from the old array to the new one, and then deallocating the memory occupied by the old array. After expanding the capacity if needed, it adds the new element to the end of the vector.
Microsoft SDE 1:

The cs variable represents the current size of the vector, indicating how many elements are currently stored in the vector. The ms variable represents the maximum size (capacity) of the vector, which is the total number of elements that the vector can hold without resizing. These variables are crucial for managing the vector's size, ensuring it doesn't exceed its capacity, and determining when to resize the vector as elements are added.
Google SDE 1:

The pop_back method removes the last element from the vector by decrementing the current size (cs) if it's greater than zero. It doesn't actually shrink the vector's capacity or deallocate memory; it simply updates the size to reflect the removal of the last element. This ensures that the vector remains contiguous in memory, with unused capacity available for future additions without frequent reallocations.
Amazon/Microsoft/Google SDE 1:

To improve efficiency for frequent insertions and deletions, I would consider adding methods like insert and erase to directly manipulate elements at specific positions without shifting elements. Additionally, implementing move semantics or using move constructors/assignment operators can reduce unnecessary copying during vector operations.
Google SDE 1:

It's essential to check if cs == ms before doubling the capacity in the push_back method to avoid unnecessary reallocations and copying when the vector has sufficient capacity. If this check is not performed, the vector might unnecessarily double its capacity even when it's not needed, leading to wasted memory and increased overhead.
Microsoft/Google SDE 1:

The front method returns the first element of the vector (arr[0]), back returns the last element (arr[cs - 1]), and at returns the element at a specified index i (arr[i]). The time complexity for these methods is O(1) since they directly access elements in the array based on their indices without traversal.
Amazon/Microsoft/Google SDE 1:

To handle exceptions or errors, you can modify the code by adding boundary checks in the at method to ensure the index is within the valid range (0 <= i < cs). Additionally, you can use try-catch blocks for memory allocation failures (e.g., new operator throwing std::bad_alloc) or implement custom exception classes for specific error scenarios, providing meaningful error messages and graceful error handling in the vector class.
*/