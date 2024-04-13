#include<iostream>
#include "vector.h"
using namespace std;


int main() {

    Vector<char> vc;
    vc.push_back('a');
    vc.push_back('b');
    vc.push_back('c');

    for (int i = 0; i<vc.size(); i++)
    {
        cout<< vc[i] <<endl;
    }

Vector<int> v(5);

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

