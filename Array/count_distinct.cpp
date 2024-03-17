#include<iostream>
using namespace std;

int count_distinct(int arr[], int n) {
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        bool isDistinct = true; // Initialize isDistinct inside the loop
    
        for (int j = i - 1; j >= 0; j--) {
            if (arr[i] == arr[j]) {
                isDistinct = false;
                break;
            }
        }
        
        if (isDistinct) // Check if isDistinct is true
            count++;
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << count_distinct(arr, n);

    return 0;
}
