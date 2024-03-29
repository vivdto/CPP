#include<iostream>
using namespace std;


void intro(int arr[], int size){
    cout << "INSIDE FUNCTION BODY" << endl;
    
    int max = arr[0];

    
    for (int i =0; i<size; i++)
    {
        cout<<arr[i]<<" ";
        cout<<endl;
        
        if(arr[i]>max)
            {
                max = arr[i];
               }
    }
                cout<<"Maximum Element in Array is :"<<max<<endl;
                cout << "Size of the array: " << size << endl;
}

int main ()
{
    int n = 5;
    int arr[n] = {10,20,30,40,50};
    
    int sizeis = sizeof(arr)/sizeof(arr[0]);
    
    cout<<sizeis<<endl;
    
    for (int i =0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    intro(arr, n);
    
    return 0;
}