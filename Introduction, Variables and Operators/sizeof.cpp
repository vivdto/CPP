#include<iostream>
using namespace std;


int main ()
{

    cout<<sizeof(int)<<endl;
    cout<<sizeof(char)<<endl;
    cout<<sizeof(long long)<<endl;
    cout<<sizeof(float)<<endl;
    cout<<sizeof(bool)<<endl;
    
    //cout<<sizeof(c);
    cout<< sizeof(10ll)<< "\n";
    cout<< sizeof(3.4)<< "\n";
    cout<< sizeof(3.4f)<< "\n" ; 

    int var = 5 ;
    cout << sizeof(var ++) << "\n" ; 
    
    cout << var << "\n" ; 



    return 0;
}