#include<iostream>
using namespace std;

int main()
{
    int a[] = {1,2,3,4};
    int *p = a;
    cout << p << " " << *p << "\n";
    
    p++;
    cout << p << " " << *p << "\n";
    
    p--;
    cout << p << " " << *p << "\n";
    
    p += 2;
    cout << p << " " << *p << "\n";
    
    p -= 2;
    cout << p << " " << *p << "\n";
    
    auto p2 = p; 
    p += 3;
    cout << p << " " << *p << "\n";
    
    cout << p - p2;
    
    return 0;
}

/*

Output;

0x7ffc65bc5120 1
0x7ffc65bc5124 2
0x7ffc65bc5120 1
0x7ffc65bc5128 3
0x7ffc65bc5120 1
0x7ffc65bc512c 4
3

*/