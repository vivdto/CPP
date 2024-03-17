/* 

Ya toh uppar likho ya; uppar declare kro. ---defination main likho...declartaion m nhi


It seems like you're trying to call the fun function before it's declared. To fix this issue, you need to either declare or define the fun function before calling it in the main function. Here's the corrected code:

#include <iostream>
using namespace std;

// Function declaration
void fun(int id, string name = "NA");

int main()
{
    fun(101);
    return 0;
}

// Function definition
void fun(int id, string name)
{
    cout << id << " " << name;
}
In this corrected version, I've added a function declaration for fun before the main function. This informs the compiler about the existence of the fun function before it's called. Then, the fun function is defined after the main function. This way, the main function knows what fun is when it calls it.

---Linked Function;

*/