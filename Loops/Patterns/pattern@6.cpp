#include<iostream>
using namespace std;

int main ()
{
    
    int n = 6;
    
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<=i; j++)
        {
            cout<<" ";
        }
        
        for (int j = 0; j<=2*n-(2*i+1); j++)
        {
            cout<<"*";
        }
        for (int j = 0; j<=i; j++)
        {
            cout<<" ";
        }
        cout<<endl;
        
    }
    
    
    return 0;
}