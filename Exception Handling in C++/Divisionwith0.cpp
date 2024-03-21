#include<iostream>
using namespace std ;

int main()
{
    int x, y;
    cin >> x >> y;
    try
    {
        if(y==0)
            throw 0;
        cout << "Result is " << x/y;
    }
    catch (int x)
    {
        cout << "Division with 0";
    }
    return 0 ;
}