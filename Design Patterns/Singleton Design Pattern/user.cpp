#include<iostream>
#include "logger.hpp"
#include <thread>

using namespace std;

void user1logs()
{
Logger *Logger1 = Logger::getLogger();
    Logger1->Log("this message is fron User 01");

}

void user2logs()
{
    Logger *Logger2 =  Logger::getLogger();
    Logger2->Log("this message is fron User 02");
}


int main ()
{
    
    thread t1(user1logs);
    thread t2(user2logs);

    t1.join();
    t2.join();
   
}