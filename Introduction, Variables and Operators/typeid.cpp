#include<iostream>
using namespace std;
int main ()
{
    auto a = 10;
    auto b = 15.7;
    cout<<a<<" "<< b<<endl;

    cout<<typeid(a).name()<<" "<<typeid(b).name();



    return 0;
}