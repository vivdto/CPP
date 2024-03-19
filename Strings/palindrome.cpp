
#include<iostream>
using namespace std;

int main ()
{
    string name;
    cin>>name;
    
    int start = 0; 
    int end = name.length() -1;
    
    while(start<end)
    {
        if (name[start]!= name[end])
        {
            cout<<"No";
            return 0;
        }
        else{
            start++;
            end--;
        }
        
    }
    cout<<"Yes";
    return 0;
    
}