#ifndef logger_h
#define logger_h

#include <string>
#include <mutex>

using namespace std;

class Logger {
    static int ctr;              // Static variable to count instances
    static Logger* loggerInstance; // Static pointer to the logger instance
    static mutex mtx;            // Static mutex for thread safety

    Logger();                    // Private constructor to prevent direct instantiation
    Logger(const Logger);        // Private copy constructor to prevent copying of instances

public:
    static Logger* getLogger();  // Static method to get the logger instance
    
    void Log(string msg);        // Method to log messages
};

#endif
