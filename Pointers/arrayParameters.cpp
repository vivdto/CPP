// Code Explanation:
// This code demonstrates function overloading in C++. 
// There are two functions named 'f', each taking different parameters.
// One takes an array and calculates its size using sizeof operator, 
// while the other takes both array and an integer specifying its size.

#include<iostream>
using namespace std;

void f(int a[])
{
    int n = sizeof(a)/sizeof(int); // This line calculates the size of the pointer, not the array.
    for(int i = 0; i < n; i ++)
    {
        cout << a[i] << ' ';
    }
    cout << '\n';
}
void f(int a[], int N)
{
    int n = N; // This function takes the size of the array as an argument.
    for(int i = 0; i < n; i ++)
    {
        cout << a[i] << ' ';
    }
    cout << '\n';
}
int main()
{
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(int);
    for(int i = 0; i < n; i ++)
    {
        cout << a[i] << ' ';
    }
    cout << '\n';
    f(a); // Calls the first function
    f(a,n); // Calls the second function
    return 0;
}

// Interview Questions:
// 1. What is function overloading?
//    a) The ability to define multiple functions with the same name but different parameters
//    b) The ability to define multiple functions with the same name and same parameters
//    c) The ability to define multiple functions with the same return type
//    d) The ability to define multiple functions with different return types
//    Correct Answer: a

// 2. Why does the size calculation in the 'f(int a[])' function not work as expected?
//    a) Because the sizeof operator returns the size of the pointer, not the array
//    b) Because the array is passed by value, not by reference
//    c) Because the sizeof operator cannot be used with arrays
//    d) Because the sizeof operator doesn't work with integers
//    Correct Answer: a

// 3. How does the 'f(int a[], int N)' function calculate the size of the array?
//    a) It uses the sizeof operator
//    b) It relies on the function argument specifying the size
//    c) It calculates it using a loop
//    d) It retrieves it from the array itself
//    Correct Answer: b
