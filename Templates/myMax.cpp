#include<iostream>
using namespace std;


template <class V>

    V maxValue(V x, V y)
    {
        return (x>y)?x:y;
    }


int main ()
{
    
    cout<<maxValue<int>(3,7)<<endl;
     cout<<maxValue<char>('c','g')<<endl;
    

    return 0;
}