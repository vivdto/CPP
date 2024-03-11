#include<iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3};  // Declare an array 'a' with 3 elements
    int *p = a;           // Declare a pointer 'p' and initialize it with the address of the first element of 'a'
    
    cout << sizeof(a)  << endl;  // Print the size of the whole array 'a' (in bytes)
    cout << sizeof(p)  << endl;  // Print the size of the pointer 'p' (in bytes)
    cout << *(a+2) << endl;      // Print the value at the third index of array 'a' using pointer arithmetic
    cout << p[2] << endl;        // Print the value at the third index of array 'a' using pointer 'p'
    
    return 0;
}

/*
Explanation:

int a[] = {1, 2, 3};: Declares an array named 'a' with three integer elements: 1, 2, and 3.
int *p = a;: Declares a pointer 'p' and initializes it with the address of the first element of array 'a'.
cout << sizeof(a) << endl;: Prints the size of the array 'a'. In this case, since 'a' has three integers, it will print the size of three integers in bytes.
cout << sizeof(p) << endl;: Prints the size of the pointer 'p', which depends on the system architecture. Usually, it's 4 or 8 bytes in a 32-bit or 64-bit system respectively.
cout << *(a+2) << endl;: Accesses the third element of array 'a' using pointer arithmetic. Here, *(a+2) is equivalent to a[2], so it prints the value 3.
cout << p[2] << endl;: Accesses the third element of array 'a' using the pointer 'p'. This is equivalent to *(p + 2) which again points to the third element of 'a' and prints its value, which is 3.
Interview questions:

What is the difference between sizeof(a) and sizeof(p) in the given code?
How would you access the third element of array 'a' using pointer arithmetic?
What would be the output of cout << *(a+2) and cout << p[2] in the given code?
Multiple Choice Questions (MCQs):

What is the size of the array 'a' in the given code?
a) 3
b) 12
c) Depends on the system architecture
d) None of the above

What is the value printed by cout << *(a+2)?
a) 1
b) 2
c) 3
d) Error

What is the size of the pointer 'p' in the given code?
a) 3
b) 4
c) 6
d) Depends on the system architecture 

*/