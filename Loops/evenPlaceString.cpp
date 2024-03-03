#include<iostream>
using namespace std;

int main ()
{
    string name;
    cout<<"Enter a Name to Print only even place";
    getline(cin,name);
    
    
    for (int i = 0; i<name.length(); i+=2){
        cout<<name[i];
        
    }
    
    return 0;
}