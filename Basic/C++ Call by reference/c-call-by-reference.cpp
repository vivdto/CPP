//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;


// } Driver Code Ends
//User function Template for C++

void reverse_dig( int& a, int& b ) {
    int r{ a % 10 };
    while ( a /= 10 ) r = r * 10 + a % 10;
    a = r, r = b % 10;
    while ( b /= 10 ) r = r * 10 + b % 10;
    b = r;
}
void swap( int& a, int& b ) {
    a += b, b = a - b, a -= b;
}


//{ Driver Code Starts.

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
	    cin>>a>>b;
	
	    reverse_dig(a,b);
	    swap(a,b);
	    cout<<a<<" "<<b<<endl;
    }
	return 0;
}
// } Driver Code Ends