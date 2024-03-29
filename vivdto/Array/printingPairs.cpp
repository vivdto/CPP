#include<iostream> 
using namespace std;    
void printPairs (int arr[], int n) {
    for (int i = 0; i<n; i++)    
    // 1,2,3,4,5     // 1     
    {         cout<<i<<endl;         
    for (int j = i; j<n; j++)         
    cout<<j;     }     
    cout<<endl; }  
    
    int main () 
    {          
        int n = 5;     
        int arr[5] = {10,20,30,40,50};          
        printPairs(arr,n);               
        return 0; }