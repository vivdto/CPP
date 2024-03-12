/*

Introduction:

•Sequence of characters, e.g., "gtg", "courses",..

→Small Set (typically) and no separator required.

'A' to 'Z' have values from 65 to 90

'a' to 'z' have values from 97 to 122

C-Style String,
C++ Style String.

*/


#include<iostream>
#include<string.h>

using namespace std;
/*

// C STYLE STRING; 


int main ()
{
    
    char s1[] = "gfg"; // also call string terminator and ascii value 0, \0  always gets added automatically.
    char s2[] = {'g','f','g','\0'}; // \0 termination charact
    
    cout<<strlen(s1)<<endl; //strlen is a function
    cout<<strlen(s2)<<endl;
    
    // strcmp is to compare two string lexicographically.
    
    int res = strcmp(s1,s2);
    
    if(res==0)
    cout<<"Same";
    
    else if(res<0)
    cout<<"Small";
    
    else
    cout<<"Greater";
    
    
    
*/




    int main ()
    {
        
    char str [5];
    strcpy (str, "gfg");
    cout<<str;
    
// YOU CAN'T DO Something like this--
/*
NOTE: we can not do 
char str [5];
str = "gfg";
so we use strcpy() in c style strings.
*/


return 0;
}

