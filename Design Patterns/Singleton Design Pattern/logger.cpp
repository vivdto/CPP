#include<iostream>
#include "logger.hpp"

using namespace std;

// Static member variables initialization
int Logger::ctr = 0; 
Logger *Logger::loggerInstance = nullptr;
mutex Logger::mtx;

// Constructor definition
Logger::Logger()
{
    ctr++;
    cout << "New Instance Created. No of Instances: " << ctr << endl;
}

// Log method definition
void Logger::Log(string msg)
{
    cout << msg << endl;
}

// getLogger method definition
Logger* Logger::getLogger()
{
    // Double-checked locking pattern to ensure thread safety
    if (loggerInstance == nullptr) {

        // Acquire the lock to access the critical section
        mtx.lock();

        // Double check if the loggerInstance is still null
        if (loggerInstance == nullptr)
        {
            loggerInstance = new Logger(); // Create a new instance
        }

        // Release the lock after finishing the critical section
        mtx.unlock();
    }
    
    // Return the loggerInstance
    return loggerInstance;
}
