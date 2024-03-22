#include<iostream>
#include "logger.hpp"

using namespace std;

int main ()
{
    Logger* Logger1 = new Logger();
    Logger1->Log("this message is fron User 01");


    Logger* Logger2 = new Logger();
    Logger2->Log("this message is fron User 02");
}