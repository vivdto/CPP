#include<iostream>
using namespace std ;
int average(int arr[], int n)
{
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
    cout << average(arr, n);
    return 0 ;
}