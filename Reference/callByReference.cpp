int reverseDigits(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

// Function to reverse the digits of two integers
void reverse_dig(int &a, int &b) {
    a = reverseDigits(a);
    b = reverseDigits(b);
}