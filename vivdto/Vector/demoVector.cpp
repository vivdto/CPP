#include<iostream>
#include<vector>
using namespace std;

int main ()
{

vector<int> arr = {10,20,30,40,50, 90};


//Fill Constructor.
vector<int> arr(10,7);


//Push_Back O(1)
arr.pop_back();

arr.push_back(190);
arr.push_back(210);
 //DOUBLING HAPPENS IN VECTOR

 for(int i = 0; i<arr.size(); i++)
 {
    cout<<arr[i]<<endl;
 }

cout<<arr.size()<<endl; //Sizeof the vector.

//Lets also check the capacity to check the actual memory located -->

cout<<arr.capacity()<<endl; // Kitna Hh Value?




    return 0;
}