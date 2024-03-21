#include<iostream>
using namespace std ;

void f1() throw (int)
{
    cout << "F1 begins \n";
    throw 100;
    cout << "F1 ends \n";
}

void f2() throw (int)
{
    cout << "F2 begins \n";
    f1();
    cout << "F2 ends \n";
}

int main()
{
    try
    {
        f2();
    }
    catch(int x)
    {
        cout << "Caught Exception \n";
    }
    cout << "Bye ... \n";
    return 0 ;
}