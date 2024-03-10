//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    void follPatt(string s)
    {
       int ans = 1;
       int m=0;
       int i =0;
       while(i<s.length())
       {
           while(s[i]=='x'){
               m++;
               i++;
           }
            while(s[i]=='y'){
               m--;
               i++;
            }
            if(m!=0)
                break;
            
       }
       if(m!=0)
       {
           cout<<0;
       }
       else
       {
           cout<<1;
       }
       
       
       cout<<endl;
    }
};


//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;

	while(t--)
	{
	    
	    string s;
	    cin>>s;
	    Solution obj;
	    //function call
	    obj.follPatt(s);
	   
	}
	return 0;
}
// } Driver Code Ends