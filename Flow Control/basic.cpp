#include<iostream>

using namespace std;

int main()
{
    int age;
    cout << "Enter your age:\n";
    cin >> age;
    if(age < 0 or age > 150)
    {
        cout << "Invalid Age \n";
    }
    else
    {
        cout << "Valid Age \n";
    }
    return 0;
    
}