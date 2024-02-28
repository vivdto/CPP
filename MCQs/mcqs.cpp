/*


Question 1; 


#include <bits/stdc++.h> // This line includes the entire standard C++ library for this program.

using namespace std; // This line declares that we're using the standard namespace.

int main() // This is the entry point of the program.
{
    unsigned int x = -1; // This line initializes an unsigned integer variable 'x' with the maximum value representable by an unsigned int. -1 here is interpreted as the maximum value of an unsigned int due to two's complement representation.
    int y = 0; // This line initializes an integer variable 'y' with the value 0.

    if (x == y) // This line checks if the value of 'x' is equal to the value of 'y'.
        cout << "same"; // If 'x' is equal to 'y', it prints "same".
    else
        cout << "not same"; // If 'x' is not equal to 'y', it prints "not same".

    return 0; // This line indicates the end of the main function and returns 0 to the operating system, indicating successful execution of the program.
}
Explanation:

The code initializes two variables, 'x' as an unsigned integer and 'y' as a signed integer.
'x' is initialized with the value -1. In unsigned integer context, -1 is interpreted as the maximum value representable by an unsigned integer.
'y' is initialized with the value 0.
The code then checks if 'x' is equal to 'y' using an if statement.
Since 'x' is initialized with the maximum value of an unsigned integer and 'y' is initialized with 0, they are not equal.
Therefore, the else block is executed, and "not same" is printed.
Finally, the main function returns 0, indicating successful execution of the program.







Question 2; 








*/