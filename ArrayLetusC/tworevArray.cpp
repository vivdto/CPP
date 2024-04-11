#include<iostream>
using namespace std;

int main() {
    int n = 5;
    int num[n] = {10, 20, 30, 40, 50};
    int revnum[n] = {0}; // Initialize all elements to 0

    // Copy elements from num to revnum in reverse order
    for(int i = n - 1; i >= 0; i--) {
        revnum[n - i - 1] = num[i]; // Copy in reverse order
    }

    // Print the reversed array revnum
    for(int i = 0; i < n; i++) {
        cout << revnum[i] << " ";
    }

    return 0;
}
