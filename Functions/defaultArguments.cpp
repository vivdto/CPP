#include<iostream>

using namespace std;

void printDetails(int id, string name = "NA", string address = "NA")
{
    cout << "Id: " << id << '\n';
    cout << "Name: " << name << '\n';
    cout << "Address: "<< address << '\n';
}

int main()
{
    printDetails(101, "Sandeep", "Noida");
    cout << '\n';
    printDetails(201, "Shivam");
    cout << '\n';
    printDetails(301);
    return 0;
}