#include <iostream>
using namespace std;

void arrayFunction(int arr[], int size) {
    int max = arr[0];
    
    for(int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        cout << arr[i] << " ";
    }
    
    cout << endl << "Max : " << max << endl;
    cout << "Size of the array: " << size << endl;
}

int main() {
    int n = 5;
    int arr[n] = {10, 20, 30, 40, 50};

    for(int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    
    cout << endl;
    arrayFunction(arr, n);

    return 0;   
}
