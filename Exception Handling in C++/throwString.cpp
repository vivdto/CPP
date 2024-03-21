#include<iostream>
using namespace std ;
int average(int arr[], int n) throw (string) // good practice to declare the throw, we can write multiple with comma seprated values.
{
    if(n == 0)
        throw string("Array size is 0");
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum = sum + arr[i];
    int res = sum/n;
    return res;
}
int main()
{
    int n; 
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    try 
    {
        int res = average(arr, n);    
        cout << res;
    }
    catch (string &e)
    {
        cout << e;
    }
    cout << "\nBye\n";
    
    return 0 ;
}