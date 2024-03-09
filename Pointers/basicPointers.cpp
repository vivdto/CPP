#include<iostream>
using namespace std;

int main ()
{

int x = 5;
int *y = &x;
cout<<y<<endl;
x == *y;
cout<<y;

return 0;
}


//y --> integer pointer 
//* y ---> integer

