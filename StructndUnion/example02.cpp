#include<iostream>
using namespace std;

struct Student
{
    int rollNo;
    string name;
    string address;
};

int main()
{
    Student s = {101, "ABC", "xyz"};
    cout << s.rollNo << " " 
         << s.name   << " "
         << s.address<< "\n";
    return 0;
}