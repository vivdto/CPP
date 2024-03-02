#include <iostream>
using namespace std;

int main() {
	
	// Initializing integer variables x and y with values 3 and 6 respectively
	int x = 3, y = 6;
	
	// Bitwise AND operation between x and y, outputs the result
	cout << (x & y) << endl; // Output: 2
	
	// Bitwise OR operation between x and y, outputs the result
	cout << (x | y) << endl; // Output: 7
	
	// Bitwise XOR operation between x and y, outputs the result
	cout << (x ^ y) << endl; // Output: 5
	
	return 0;
}
