//O(N) --> Time&Space.


#include<iostream>
using namespace std;

int main ()
{

int n = 9; 
int arr[n] = {-2,3,4,-1,5,-12,6,1,3};

int cs = 0;
int largest = 0;

for (int i = 0; i<n; i++) {
    cs+=arr[i];

        if(cs<0)
        {
            cs = 0;
        }
        
    largest = max (largest, cs);
}

cout<<largest<<endl;
return 0; 

}