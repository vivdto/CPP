#include<iostream>
using namespace std;


void watchVideo(int *viewsPtr){ // pointer variable


*viewsPtr = *viewsPtr+1; // derefrencing.

}


int main ()
{

int views = 100;
watchVideo(&views); // address!

cout<<views<<endl;


return 0;
}