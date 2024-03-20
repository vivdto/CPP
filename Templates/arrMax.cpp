#include<iostream>
using namespace std;

// Define a template function arrMax that finds the maximum value in an array of type T.
template <typename T>
T arrMax(T arr[], int n){
    T res = arr[0]; // Initialize the result variable with the first element of the array.
    for(int i = 1; i < n; i++){ // Iterate through the array starting from the second element.
        if(arr[i] > res) // Check if the current element is greater than the current maximum.
            res = arr[i]; // Update the maximum value if the current element is larger.
    }
    return res; // Return the maximum value found in the array.
}

int main()
{
    int arr1[] = {10, 40, 3}; // Define an integer array.
    cout << arrMax <int> (arr1, 3)   << " "; // Call arrMax with integer array and output the maximum value.

    float arr2[] = {10.5, 3.5, 1.5, 30.5}; // Define a float array.
    cout << arrMax <float> (arr2, 4) << " "; // Call arrMax with float array and output the maximum value.
    
    return 0; // Return 0 to indicate successful execution of the program.
}
