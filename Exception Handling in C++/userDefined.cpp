#include<iostream>
using namespace std ;

class arraySizeZero {};
class arraySizeNegative {};

int average(int arr[], int n)
{
    if(n == 0)
        throw arraySizeZero();
    if(n < 0)
        throw arraySizeNegative();
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
    catch (arraySizeNegative &e1)
    {
        cout << "Array Size Negative";
    }
    catch (arraySizeZero &e2)
    {
        cout << "Array Size Zero";
    }
    cout << "\nBye\n";
    
    return 0 ;
}