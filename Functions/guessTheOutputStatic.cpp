/*In the provided code, x is declared as a static variable inside the fun function, while y is declared as a local variable. The difference in behavior you're observing is due to their respective types.

Static Variable (x):

Static variables persist their values across function calls. When the function fun is called repeatedly, the static variable x retains its value between function calls. Every time fun is called, x gets incremented, but its value persists between function calls.
Local Variable (y):

Local variables are destroyed and re-initialized every time the function they are defined in is called. So, each time fun is called, a new variable y is created and initialized to 1. After the function call ends, y goes out of scope and is destroyed. Thus, the value of y remains constant (always 1) every time fun is called.
Here's what happens in each fun call:

x gets incremented every time fun is called and retains its value across calls.
y gets re-initialized to 1 every time fun is called and its scope ends with the function call, so its value doesn't persist.
That's why you observe x changing and y staying constant.*/

#include <iostream>
using namespace std;


void fun ()
{ 
    static int x = 1;
    int y = 1;  
    x++;
    y++;
    
    cout << x <<" "<< y<< " "<<endl;
}
int main()
    {
    fun();
    fun();
    fun();
    return 0;
}