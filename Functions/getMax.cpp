#include<iostream>
using namespace std;

// Function prototype for getMax function
int getMax(int, int);

int main ()
{
    // Declaring and initializing variables
    int a = 10; 
    int b = 20; 
    
    // Printing the maximum of two numbers using getMax function
    cout << "Maximum of " << a << " and " << b << " is: " << getMax(a, b) << endl;
    
    return 0;
}

// Definition of getMax function
int getMax(int x, int y)
{
    // Checking if x is greater than y
    if(x > y)
        return x; // Return x if it's greater
    else 
        return y; // Otherwise return y
}
