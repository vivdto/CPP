#include<iostream>
using namespace std;

void fun(){
    cout<<"Function is called"<<endl;
}


int maxNumber(int a, int b){

    return max(a,b);

}

int main ()
{
    cout<<"Before calling the function"<<endl;

    fun();

        cout<<"After calling the function"<<endl;
    cout<<maxNumber(3,4)<<endl;
    return 0;
}