//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

void push(stack<int> &s,int x);
int pop(stack<int> &s);

int getSize(stack<int> &s);

int getTop(stack<int> &s);
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		stack<int> s;
		int q;
		cin>>q;
		while(q--)
		{
			char c;
			cin>>c;
			if(c=='a')
			{
				int x;
				cin>>x;
				push(s,x);
			}
			if(c=='b')
			{
				cout<<pop(s)<<" ";
			}
			if(c=='c')
			{
				cout<<getSize(s)<<" ";
			}
			if(c=='d')
			{
				cout<<getTop(s)<<" ";
			}
		
		
		
		}
cout<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*You are required to complete below methods*/

/*the function pushes an element
x into the stack s */
void push( stack< int >& s, int x ) {
    s.push( x );
}
int pop( stack< int >& s ) {
    if ( s.empty() ) return -1;
    const int top{ s.top() };
    return s.pop(), top;
}
int getSize( stack< int >& s ) {
    return s.size();
}
int getTop( stack< int >& s ) {
    return s.empty() ? -1 : s.top();
}