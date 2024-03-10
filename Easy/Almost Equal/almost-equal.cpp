//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

/*Function to count number of characters 
* to make s1 and s2 equal
* s1 : first string
* s2 : second string
*/
class Solution{
    public:
    int countChars(string s1, string s2){
        
        
        
        int l1=s1.length();
       int l2=s2.length();
       int arr1[26]={0};
       int arr2[26]={0};
       
       for(int i=0;i<l1;i++){
           arr1[s1[i]-'a']++;
       }
       for(int j=0;j<l2;j++){
           arr2[s2[j]-'a']++;
       }
       int result = 0;
       for(int i=0;i<26;i++){
           result += abs(arr1[i]-arr2[i]);
       }
       return result;
}        // Your code here
        
    
};

//{ Driver Code Starts.
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    
	    // taking string input
	    string s1, s2;
	    cin >> s1 >> s2;
	    Solution obj;
	    cout << obj.countChars(s1, s2) << endl;
	}
	
	return 0;
}
// } Driver Code Ends