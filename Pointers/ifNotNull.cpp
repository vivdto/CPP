#include<iostream>
using namespace std; 
int main ()
{
    int *ptr;

    cout<<*ptr;
// This will lead to garbage value, segementation error, crash my program or is called as wild Pointer.

    return 0;
}