#include<iostream>
using namespace std;


int main (){
    int n,d; 
    cin>>d>>n;

    int res = d-n;
    res = res %7;
    
    if(res <0) res+=7;
    cout<<res;
  
  
return 0;   
}