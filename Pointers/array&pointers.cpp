#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30};
    int *ptr = arr; // Assigning the address of the first element of 'arr' to 'ptr'

    // Output the size of 'arr' in bytes
    cout << "Size of arr: " << sizeof(arr) << " bytes" << endl;

    // Output the size of 'ptr' in bytes
    cout << "Size of ptr: " << sizeof(ptr) << " bytes" << endl;

    // Accessing the third element of 'arr' using pointer arithmetic
    cout << "Value at arr[2]: " << *(arr + 2) << endl;

    // Accessing the third element of 'arr' using pointer notation
    cout << "Value at ptr[2]: " << ptr[2] << endl;

    return 0;
} 

/*
Explanation:
1. We declare an integer array 'arr' with three elements: 10, 20, and 30.
2. We declare an integer pointer 'ptr' and assign the address of the first element of 'arr' to it.
3. We output the size of 'arr' using the sizeof operator, which returns the size of the array in bytes.
4. We output the size of 'ptr' using the sizeof operator, which returns the size of the pointer in bytes. Note that the size of a pointer is usually fixed regardless of the data type it points to.
5. We access the third element of 'arr' using pointer arithmetic by adding 2 to the base address of 'arr' and then dereferencing it.
6. We access the third element of 'arr' using pointer notation by directly indexing 'ptr' as if it were an array.

Interview Questions:
1. What is the difference between 'arr' and 'ptr' in terms of size?
   - 'arr' is an array of integers, so sizeof(arr) returns the total size of the array in bytes, which is the size of each element multiplied by the number of elements (3 * sizeof(int)).
   - 'ptr' is a pointer to an integer, so sizeof(ptr) returns the size of the pointer itself, typically 4 or 8 bytes depending on the system architecture.
2. Why does pointer arithmetic work with 'arr' but not with 'ptr'?
   - In C++, the name of an array can be implicitly converted to a pointer to its first element. Therefore, 'arr' can be used in pointer arithmetic, whereas 'ptr' is already a pointer and does not need any conversion.
3. How can you modify the program to print all elements of 'arr' using pointer notation?
   - You can use a loop to iterate over the elements of 'arr' using pointer notation, like this:
     ```
     for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
         cout << "Value at ptr[" << i << "]: " << ptr[i] << endl;
     }
     ```
*/
