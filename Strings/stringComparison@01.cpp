#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    
    if(s1 == s2)
        cout << "Same";
    else if(s1 < s2)
        cout << "Smaller";
    else
        cout << "Greater";
    
    return 0;
}