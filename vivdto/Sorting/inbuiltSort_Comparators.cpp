#include<iostream>
#include<algorithm> // Sorting Function. --> In some cases counting sort is more efficient. It takes O(nlogn) ;)
using namespace std;


bool compare (int a, int b)
{
    return a<b;
}


int main ()
{
    
    
    int arr[] = {10,20,30,56,78,89,76,322,1892,89,3,2,3,1,1,-1,0};
    
    int n = sizeof(arr)/sizeof(int);
    
    
    sort(arr, arr+n, compare); // Compare --> This is not the function call; => we are passing a function as a parmeter to another funtion.
    
    reverse(arr, arr+n);
    
    for (int x : arr)
    {
        cout<<x<<" ";
    }
    
    return 0;
}


/*

#include<iostream>
#include<algorithm> // Sorting Function. --> In some cases counting sort is more efficient. It takes O(nlogn) ;)
using namespace std;


bool compare (int a, int b)
{
    return a<b;
}


int main ()
{
    
    
    int arr[] = {10,20,30,56,78,89,76,322,1892,89,3,2,3,1,1,-1,0};
    
    int n = sizeof(arr)/sizeof(int);
    
    
    sort(arr, arr+n, greater<int>()); 


    
    
    for (int x : arr)
    {
        cout<<x<<" ";
    }
    
    return 0;
}

*/