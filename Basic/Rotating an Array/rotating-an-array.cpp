//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    void leftRotate(int arr[], int n, int d) {
        // code here
        
        
            //Rotate by k step;
    
    
    /* 
    
    Brute Force; 
    K elements pick and put in start.
    o(N)  -- TC.
    o(N) ---SC.
    
    ---> Array ko Reverse kro, 
    Reverse krne ke baad k elements ko wapas se reverse kro
    
    and vo hoga hamara rotated array.
    now (n-k) ko reverse kro. 
    
    
    3 steps;
    
    1. Reverse the whole elements 
    2. reverse the first k elements
    3. reverse n-k now
    
    
    and we get output.
    
    time complexity will be o(n)
    and space complexity will be o(n).
    
    */
    
    

        // in case where the k is greater than the  size of array 
        // k = 10; 
        // size = 7; -->k/size = 3.
        
        
        reverse(arr,arr+d);
        reverse(arr+d,arr+n);
        reverse(arr,arr+n);
        

    
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> d;
        Solution ob;
        ob.leftRotate(arr, n, d);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}



// } Driver Code Ends