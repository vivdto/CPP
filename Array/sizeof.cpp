#include<iostream>
using namespace std;

int main ()
{


    int a[] = { 10, 15, 25 , 20, 25};

    int size = 0; 
    size = sizeof(a)/sizeof(a[0]);
    cout<<size;
    

    return 0;
}

// o/p = 5