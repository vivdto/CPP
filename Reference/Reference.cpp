/*

#include<iostream>
using namespace std;

void fun (int x)
{
    x = x+5;
}

int main ()
{
    int x = 10; 
    fun(x);
    cout<<x;
    return 0;
}




#include<iostream>
using namespace std;

int main()
{
    int x = 10;
    int &y = x;
    cout << y << ' ' ;
    x += 5;
    cout << y << ' ' ;
    y += 5;
    cout << x << ' ' ;
    return 0;
}

*/

#include<iostream>
using namespace std;

//void fun1 (int x)
//{
  //  x += 2;
//}
void fun2 (int &x)
{
    x += 2;
}
int main()
{
    int x = 2;
   // fun1(x);
    cout << x << ' ';
    fun2(x);
    cout << x;
    return 0;
}