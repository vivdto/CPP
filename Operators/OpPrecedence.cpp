#include<iostream>
using namespace std;
int main()
{
    int x = 10, y = 20 ; 
    bool res = (x>0 && x<100);
    cout << res << "\n";
    
    res = (x>0 || x>y);
    cout << res << "\n";
    
    res = !res;
    cout << res << "\n";
    
    x=5;
    
    // Short Circuiting
    res = (x>10)&&(x++);
    cout << res << " " << x << "\n";
    return 0;
}


/*

let's go through the provided C++ code step by step:

The #include<iostream> directive includes the header file iostream, which provides basic input and output services in C++.

The using namespace std; directive allows the use of elements from the std namespace without explicitly qualifying their names with std::.

The main() function is the entry point of the program.

Two integer variables x and y are declared and initialized with values 10 and 20, respectively.

A boolean variable res is declared and initialized with the result of the expression (x > 0 && x < 100). This expression checks if x is greater than 0 and less than 100. Since x is 10, the expression evaluates to true, and res is assigned true.

The value of res is outputted to the console followed by a newline character.

The value of res is re-assigned with the result of the expression (x > 0 || x > y). This expression checks if x is greater than 0 or if x is greater than y. Since x is 10 and y is 20, x > y evaluates to false, but x > 0 evaluates to true, so the overall expression evaluates to true, and res is assigned true.

The new value of res is outputted to the console followed by a newline character.

The value of res is then negated using the ! operator, so true becomes false and vice versa.

The negated value of res is outputted to the console followed by a newline character.

The value of x is changed to 5.

The concept of short-circuiting is demonstrated here. The expression (x > 10) && (x++) is evaluated. Since x is 5, x > 10 evaluates to false, and due to short-circuiting, the x++ part is not evaluated because the overall result of the && operation is already determined (false). Therefore, x remains 5, and res is assigned false.

The value of res and the updated value of x are outputted to the console, separated by a space, followed by a newline character.

Finally, 0 is returned from the main() function, indicating successful program execution.

*/