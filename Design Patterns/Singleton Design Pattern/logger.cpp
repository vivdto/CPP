#include<iostream>
#include "logger.hpp"

using namespace std;

int Logger::ctr = 0; 

Logger::Logger()
{
    ctr++;
    cout<<"New Instance Created. No of Instances"<<ctr<<endl;

}

void Logger::Log(string msg)
{
    cout<<msg<<endl;
}


Logger* Logger::getLogger();
{

}