/*As Kadane’s algorithm requires atleast one positive integer to produce the right input


Kadane's Algorithm is an iterative dynamic programming algorithm. It calculates the maximum sum subarray ending at a particular position by using the maximum sum subarray ending at the previous position. Don't worry you will learn about Dynamic Programming later in this course.

*/


//O(N) --> Time&Space.


#include<iostream>
using namespace std;

int main ()
{

int n = 9; 
int arr[n] = {-2,3,4,-1,5,-12,6,1,3};

int cs = 0;
int largest = 0;

for (int i = 0; i<n; i++) {
    cs+=arr[i];

        if(cs<0)
        {
            cs = 0;
        }
        
    largest = max (largest, cs);
}

cout<<largest<<endl;
return 0; 

}