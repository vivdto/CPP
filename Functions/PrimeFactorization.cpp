#include<iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n)
{
    for(int i = 2 ; i < n ; i ++) 
    {
        if(n%i == 0)
        {
            return false; // If n is divisible by any number other than 1 and itself, it's not prime
        }
    }
    return true; // If no divisor found, n is prime
}

// Function to find prime factors of a number
int primeFactors(int n)
{
    for(int i = 2; i <= n ; i ++)
    {
        if(isPrime(i)) // Check if i is prime
        {
            int x = i ; 
            while(n%x==0)
            {
                cout << i << " " ; // Print the prime factor
                x = x*i ; // Update x to the next multiple of i
            }
        }
    }
}

int main()
{
    int n;
    cin>>n; // Input the number
    primeFactors(n); // Call function to find and print prime factors
    return 0;
}

/*

Comments and Explanation with Questions:
Line 1: #include<iostream> includes the input-output stream library for basic input/output operations.

MCQ: What does #include<iostream> do?
A) Includes the math library
B) Includes the input-output stream library
C) Includes the file handling library
D) Includes the string manipulation library
Answer: B) Includes the input-output stream library
Line 2: using namespace std; allows you to use elements of the std namespace directly without prefixing them with std::.

MCQ: What does using namespace std; do?
A) Defines a new namespace named std
B) Includes the standard library for input/output operations
C) Avoids the need to use std:: prefix for standard library elements
D) Declares a namespace for mathematical functions
Answer: C) Avoids the need to use std:: prefix for standard library elements
Lines 5-11: isPrime(int n) is a function that checks if a given number is prime or not.

Interview Question: Explain the logic behind the isPrime function. How does it determine if a number is prime?
Lines 13-23: primeFactors(int n) is a function that finds and prints the prime factors of a given number.

Interview Question: Explain the logic behind the primeFactors function. How does it find prime factors?
Lines 25-30: main() function takes user input for a number and calls primeFactors to find and print its prime factors.

MCQ: What is the purpose of the main() function in this code?
A) To check if a number is prime
B) To find and print prime factors of a number
C) To input a number from the user
D) To define the main logic of the program
Answer: B) To find and print prime factors of a number

*/