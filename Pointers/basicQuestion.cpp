#include<iostream>
using namespace std;

int main ()
{
    
    int x = 10; 
    int *p; 
    p = &x; // esme v x ki value daal do; 
    
    cout<<x<<endl;
    
    cout<<*p<<endl;
    
    cout<<p<<endl; // Address Daalo
    
    return 0;
}