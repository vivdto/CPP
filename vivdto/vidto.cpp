#include<bits/stdc++.h>
using namespace std;

class vivdto{
    
    int mobile_number;

    protected:
    string first_name;
    string last_name;
    int age; 
    string linkedin_id;

    public:
    int sum (int a, int b)
    {
        return a+b;
    }
    void getinfo(){
        cout<<"Hey! Name is :"<<first_name<<last_name<<endl;
        
    }
};