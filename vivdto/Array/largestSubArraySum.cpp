#include<iostream>
using namespace std;

int main ()
{
    int n = 5; 
    int arr[n] = {10,20,30,40,50};
    
    int largest_sum = 0; 
    
    for (int i = 0; i<n; i++)
    {
        
        for (int j = i; j<n; j++)
        {
            int subArray_sum = 0; 
            
            for (int k = i; k<=j; k++)
            {
                
                subArray_sum+=arr[k];
            }
            
        largest_sum = max(largest_sum, subArray_sum);
    }
    
    }
    
    cout<<largest_sum<<endl;
}