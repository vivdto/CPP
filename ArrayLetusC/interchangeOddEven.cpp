#include<iostream>
using namespace std;

int main ()
{
    int i, t; 
    int n = 10; 
    int num [n] = {10,20,30,40,50,60,80,70,90,100};
    
    for (int i = 0; i<n; i= i+2)
    {
        t = num [i];
        num[i] = num [i+1];
        num [i+1] = t;
        
    }
    
    for (int i = 0; i<n; i++)
    {
        cout<<num[i]<<" ";
    }
    
    return 0;
}