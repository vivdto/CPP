#include<iostream>
using namespace std;

// Define a template function maxValue that takes two arguments of the same type and returns the maximum of the two.
template <class V>
V maxValue(V x, V y)
{
    // Return the maximum of x and y using the ternary operator.
    return (x > y) ? x : y;
}

int main()
{
    // Call the maxValue function with integer arguments 3 and 7, and output the result.
    cout << maxValue<int>(3, 7) << endl;

    // Call the maxValue function with character arguments 'c' and 'g', and output the result.
    cout << maxValue<char>('c', 'g') << endl;

    return 0;
}
/*
In this code:

maxValue is a template function that takes two arguments of type V and returns the maximum of the two.
Inside main(), maxValue<int>(3, 7) calls maxValue with integers and maxValue<char>('c', 'g') calls it with characters, demonstrating how templates can work with different data types.

*/