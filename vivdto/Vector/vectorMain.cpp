#include<iostream>
#include "vector.h"
using namespace std;


int main() {
    Vector v;  // Use the constructor with default argument (maximum size 1)
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    
    cout<<v.at(2)<<endl;

    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;


    for (int i = 0; i<v.size(); i++)
    {
        cout<<v.at(i)<<", "<<endl;
    }

    return 0;
}

