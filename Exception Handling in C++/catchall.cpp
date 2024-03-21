#include<iostream>
using namespace std ;

int main()
{
    double x, y;
    cin >> x >> y;
    try
    {
        if(x == 0.0)
            throw 0;
        if(y == 0)
            throw string("Y is 0");
        if(x + y < 0.0)
            throw (x+y);
    }
    catch(int e1)
    {
        cout << e1;
    }
    catch (string &e2)
    {
        cout << e2;
    }
    catch(...)
    //to be written at the end of all the catch block, if no data type is matching, then this come into play! Once you execute one catach block you'll never need to go for other catch block.
    {
        cout << "x+y < 0";
    }
    cout << "\nBye\n";
    return 0 ;
}