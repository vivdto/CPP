
Function overloading is a feature in C++ that allows multiple functions with the same name but different parameter lists or types to be defined within the same scope. This enables programmers to create functions that perform similar tasks but operate on different data types or numbers of parameters. Function overloading enhances code readability, reusability, and maintainability.

Theory of Function Overloading:

Syntax: Functions are overloaded by defining multiple functions with the same name but different parameters.

cpp
Copy code
returnType functionName(type1 parameter1, type2 parameter2, ...);
Parameter Lists: Function overloading is determined based on the number, types, and order of parameters in the function declaration.

Return Type: Function overloading considers only the function signature, not the return type.

Scope: Function overloading is applicable only within the same scope.

Resolution: During function call, the compiler resolves which overloaded function to invoke based on the provided arguments.

Default Arguments: Overloaded functions can have default arguments, but the order of arguments with defaults should be preserved to avoid ambiguity.

Interview Question on Function Overloading:

Question: Explain function overloading with an example and discuss its benefits.

Answer:

Function overloading is a feature in C++ that allows multiple functions with the same name but different parameter lists or types to be defined within the same scope. It enhances code readability, reusability, and maintainability by providing a way to create functions that perform similar tasks but operate on different data types or numbers of parameters.

Example:

cpp
Copy code
#include<iostream>
using namespace std;

int getMax(int x, int y) {
    return (x > y) ? x : y;
}

int getMax(int x, int y, int z) {
    return getMax(getMax(x, y), z);
}

int main() {
    cout << getMax(3, 4) << endl;    // Output: 4
    cout << getMax(2, 5, 3) << endl; // Output: 5
    return 0;
}
In this example, two functions named getMax are defined. One function takes two integers and returns the maximum of the two, while the other function takes three integers and returns the maximum of all three. This demonstrates function overloading based on the number of parameters.

Benefits of Function Overloading:

Provides a clean and intuitive interface for functions performing similar tasks.
Enhances code readability by using meaningful function names.
Promotes code reuse, as multiple functions with different parameter types can share the same name.
Simplifies maintenance by organizing related functions under the same name, making it easier to find and modify code.