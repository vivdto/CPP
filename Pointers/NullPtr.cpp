#include<iostream>
using namespace std;

int main ()
{
    int x = NULL; 
   //main.cpp:6:13: warning: converting to non-pointer type ‘int’ from NULL [-Wconversion-null] 
    
   cout<<x;
   
    return 0;
}