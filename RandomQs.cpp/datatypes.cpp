void dataTypes(int a, float b, double c, long long l, string d){
    
    // Some statements have been given to you
    // to help you understand data types
    // Please complete the same for correct result
    // Or you can delete and write your own
    float p = b/c; //do b/c
    
    double q =  b/a; //do b/a
    
    int r = c/a  ; //do c/a
    
    long long m = r+l; //do r+l
    
    cout << p << " " << q << " " << r <<" "<< m <<endl;
    
    cout << d << " " << d[3] << endl; //write 3 for index

}


/*
float p = b/c; - This divides b by c and stores the result in p.

double q = b/a; - This divides b by a and stores the result in q.

int r = c/a; - This divides c by a and stores the integer part of the result in r.

long long m = r+l; - This adds r (which is the integer part of c/a) to l and stores the result in m.

cout << p << " " << q << " " << r <<" "<< m <<endl; - This prints the values of p, q, r, and m separated by spaces, followed by a newline.

cout << d << " " << d[3] << endl; - This prints the string d, followed by the character at index 3 in d, followed by a newline.

*/