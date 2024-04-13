#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> arr = {10, 20, 30, 40, 50, 60, 70, 80};
    int key = 50;

    vector<int>::iterator it = find(arr.begin(), arr.end(), key);

    if (it != arr.end()) {
        cout << "Key Found at index: " << distance(arr.begin(), it) << endl;
    } else {
        cout << "Key Not Found :(" << endl;
    }

    return 0;
}
