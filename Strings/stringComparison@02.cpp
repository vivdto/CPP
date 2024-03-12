/* What is string::npos?

It is a constant static member value with the highest possible value for an element of type size_t.
It actually means until the end of the string.
It is used as the value for a length parameter in the string’s member functions.
As a return value, it is usually used to indicate no matches.

*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "geeksforgeeks";
    
    int res = str.find("eek");
    if(res == string::npos)
        cout << "Not Present\n";
    else
        cout << "First Occurence at index " << res;
    
    return 0;
}