#include<iostream>
using namespace std;

int main ()
{
    cout<<"Enter the number of times you want pattern to be printed";
    
    int n;  
    cin>>n; 

    for (int i = 0; i<=n; i++)
    {
        for (int j = 0; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}