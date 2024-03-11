#include <iostream>
using namespace std;

int main() {
    static int a;
    int b, c;
    int *ptr = new int[5];
    //delete [] ptr;
    // and we set the value of ptr to NULL for good practice. 
    ptr = NULL; 
    return 0;
}