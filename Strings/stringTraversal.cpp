#include<bits/stdc++.h>  // This includes all standard C++ libraries
using namespace std;

int main()
{
    string str = "gfg";  // Initialize a string variable
    
    // Normal Loop - Iterating over the string using index
    // This loop runs from 0 to the length of the string
    for(int i = 0; i < str.length(); i++)
        cout << str[i];  // Output each character of the string
    cout << endl;  // Move to the next line after printing the string
  
    // For Each Loop - Range-based loop introduced in C++11
    // Iterates over each character of the string directly
    for(char x: str)
        cout << x;  // Output each character of the string
    cout << endl;  // Move to the next line after printing the string
    
    // C++ STL Loop - Iterating over the string using iterators
    // This loop utilizes iterators to traverse the string
    for(auto it = str.begin(); it != str.end(); it++)
        cout << (*it);  // Output each character of the string
    cout << endl;  // Move to the next line after printing the string

    return 0;  // Indicate successful completion of the program
}
