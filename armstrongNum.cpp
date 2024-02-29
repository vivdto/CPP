#include<iostream>
#include<math.h>

using namespace std;

int main ()
{

    int n; 
    cin>>n;

    int OriginalNumber; 
    OriginalNumber = n; 

    int sum = 0; 

    while (n>0)
    {
        int lastdigit = n%10; 
        sum+=pow(lastdigit,3);

        n = n/10;
    }


    if (OriginalNumber == sum)
    cout<<"True";

    else 
    cout<<"False";


    return 0;
}