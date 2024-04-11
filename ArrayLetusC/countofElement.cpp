#include<iostream>
using namespace std;

int main ()
{
    
    int num = 5; 
    int a[num] = {10,20,40,50,40,50,60,80,90,100};
    
    int key; 
    
    cout<<"Enter the element to be search: ";
    cin>>key;
    
    int count= 0;
    for (int i = 0; i<num; i++)
    {
        if (a[i] == key)
        {
            count++;
                

        }
        
    }
    
    cout << "Count of " << key << " in the array is: " << count << endl;
    
    
    
    return 0;
}