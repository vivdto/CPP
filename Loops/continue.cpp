#include<iostream>
using namespace std;

int main()
{
    int n, x;
    cout << "Enter n \n";
 
    cin >> n;
    cout << "Enter x \n";
 
    cin >> x ; 
    for(int i = 1 ; i <= n; i ++)
    {
        if(i%x==0)
            continue;
 
        cout << i << " " ;
    }
 
    return 0;
}