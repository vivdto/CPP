#include<iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3}; // Array 'a' containing three integers
    int *p1 = a; // Pointer to int initialized with the address of the first element of array 'a'
    int (*p2)[3] = &a; // Pointer to an array of three integers, initialized with the address of 'a'
    
    // Output the value pointed to by p1 (which is the first element of array 'a')
    // and the value pointed to by the first element of the array pointed to by p2 (which is also the first element of 'a')
    cout << *p1 << ' ' << **p2; // Output: 1 1
    
    // Interview questions:
    // 1. What is the difference between p1 and p2?
    // 2. What is the type of p1?
    // 3. What is the type of p2?
    // 4. What does *p1 represent?
    // 5. What does **p2 represent?
    
    // Multiple-choice questions:
    // 1. What does 'int *p1 = a;' do?
    //    a) Declares a pointer to an integer
    //    b) Assigns the address of 'a' to pointer p1
    //    c) Initializes pointer p1 with the value of 'a'
    //    d) None of the above
    // Answer: b) Assigns the address of 'a' to pointer p1
    
    // 2. What does 'int (*p2)[3] = &a;' do?
    //    a) Declares a pointer to an integer
    //    b) Declares a pointer to an array of three integers
    //    c) Assigns the address of 'a' to pointer p2
    //    d) None of the above
    // Answer: b) Declares a pointer to an array of three integers
    
    // 3. What does '*p1' represent in the expression 'cout << *p1;'?
    //    a) Value pointed to by p1
    //    b) Address of p1
    //    c) Size of p1
    //    d) None of the above
    // Answer: a) Value pointed to by p1
    
    // 4. What does '**p2' represent in the expression 'cout << **p2;'?
    //    a) Value pointed to by p2
    //    b) Address of p2
    //    c) Size of p2
    //    d) Value pointed to by the first element of the array pointed to by p2
    // Answer: d) Value pointed to by the first element of the array pointed to by p2
    
    return 0;
}
