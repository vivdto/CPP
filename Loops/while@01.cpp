#include<iostream>
using namespace std;

int main()
{
    for(int i = 1 ; i < 3 ; i++)
    {
        int j = 1;
        while(j<3)
        {
            cout << i << ' ' << j << '\n';
            j++;
        }
        cout << "GFG\n";
    }
    return 0;
}