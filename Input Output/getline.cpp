#include<iostream>
using namespace std; 

int main ()

{
    string name; 
        cout << "Please enter your name \n";

    getline(cin, name);
    cout<<"Hi "<< name <<", How're you?"<<endl;
    cout<<"Welcome Back! "<<name; 

    return 0;
}