//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    
	    
	    int Largest = arr[0], secondLargest = -1;
	    for(int i=1; i<n; i++)
	    {
	        if(arr[i] > Largest)
	        {
	            secondLargest = Largest;
	            Largest = arr[i];
	        }
	        else if(arr[i] < Largest)
	        {
	            secondLargest = secondLargest > arr[i] ? secondLargest : arr[i];
	            
	            //condition ? expression_if_true : expression_if_false;
                /*
                
                In this case:

condition: secondLargest > arr[i]
expression_if_true: secondLargest
expression_if_false: arr[i]
So, the line can be read as follows:

"If secondLargest is greater than the current element arr[i], then keep secondLargest unchanged; otherwise, update secondLargest with the value of arr[i]."

*/


	        }
	    }
	    return secondLargest;

	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends