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