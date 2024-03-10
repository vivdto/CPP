#include<iostream>
using namespace std;

// Function to increment an integer by 10 (pass by value)
void fun(int x){
    x += 10;
}

// Function to increment an integer pointer by 10 (pass by reference)
void fun(int *p){
    *p += 10;
}

// Function to print the string pointer
void fun(string *p){
    cout << *p;
}

int main()
{
    int x = 10;
    fun(x);            // Call the function with an integer (pass by value)
    cout << x << '\n'; // Output: 10, as the integer x is passed by value
    
    fun(&x);           // Call the function with the address of x (pass by reference)
    cout << x << '\n'; // Output: 20, as the value of x has been modified
    
    string s = "abcd";
    fun(&s);           // Call the function with the address of the string
                       // (pass by reference), which prints the string
    return 0;
}



/*
Interview Questions:

What is function overloading? How does it work in this code?
Explain pass by value and pass by reference. How are they utilized in this code?
Why does the output of fun(x) not modify the original value of x?
How is memory affected when passing parameters by value versus by reference?
Can you pass the address of a string to a function that accepts an integer pointer? Why or why not?
What is the purpose of using using namespace std;?
Multiple Choice Questions:

What is the output of cout << x << '\n'; after the first call to fun(x)?
a) 0
b) 10
c) 20
d) Compilation error
Correct Answer: b

Which function is called when fun(x) is invoked?
a) void fun(int x)
b) void fun(int *p)
c) void fun(string *p)
d) No function is called
Correct Answer: a

What does the function fun(string *p) do?
a) Increments the string pointer by 10
b) Prints the string pointer
c) Concatenates "abcd" with another string
d) None of the above
Correct Answer: b

*/