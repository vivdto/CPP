#include <iostream>
using namespace std;

int main() {
    static int a;
    int b, c;
    int *ptr = new int[5];
    *(ptr+2) = 10;
    cout << *(ptr+2);
    return 0;
}