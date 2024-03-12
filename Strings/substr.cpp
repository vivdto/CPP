#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "vivashwat";
    
    cout << str.length() << endl;
    
    str = str + "@vivdto";
    cout << str << endl;
    
    cout << str.substr(1, 3) << endl;
    
    cout << str.find("wat");
    
    return 0;
}