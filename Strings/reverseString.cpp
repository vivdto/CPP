string reverseString(string s){
    // code here
    
    int len = s.length();
       string reversed;

    for (int i = len - 1; i >= 0; i--) {
        reversed += s[i]; // Concatenate each character to form the reversed string
    }

    return reversed;

}