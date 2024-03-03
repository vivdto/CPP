#include<iostream>
using namespace std;

int main ()
{
    int numOfStars;
    
    cout<<"Enter the number of times you want the starts to be printed"<<endl;
    cin>>numOfStars;
    
    for (int i = 0; i<numOfStars; i++)
    {
        for (int j = 0; j<numOfStars; j++)
        {
        
        cout<<"*";
        }
        cout<<endl;
    }
    
    
    return 0;
}