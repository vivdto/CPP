/*
A Singleton class is a design pattern used in object-oriented programming to ensure that a class has only one instance and provides a global point of access to that instance. The Singleton pattern is often used in scenarios where there should be exactly one instance of a class available to all clients, such as managing shared resources or providing a centralized control point for functionality.

Here are the key characteristics and features of a Singleton class:

Private Constructor: The Singleton class has a private constructor to prevent direct instantiation from outside the class. This means that other classes cannot create instances of the Singleton class using the new keyword.

Static Instance: The Singleton class provides a static member variable to hold the single instance of the class. This static member variable is typically private to the class and initialized to nullptr or another appropriate default value.

Static Method for Access: The Singleton class provides a static method, often named getInstance() or similar, that allows clients to access the single instance of the class. This method is responsible for creating the instance if it doesn't already exist and returning the existing instance otherwise.

Lazy Initialization (optional): In many cases, the Singleton instance is lazily initialized, meaning it is created when getInstance() is called for the first time rather than being created when the program starts. Lazy initialization can save resources if the Singleton object is not always needed.

Thread Safety (optional): If the Singleton class is used in a multithreaded environment where multiple threads may access getInstance() concurrently, it's essential to ensure thread safety. This can be achieved using techniques like double-checked locking, mutexes, or atomic operations.

*/





/*One Dp connection / One Config Manager / Login --> Logger --> all the logs go at one place*


/*


to make it happen we make our constructor private or we can define a staic function and call it where needed.

no new instance will be created.


--> Construtor Private;
So that no user can call the constructor.

--> Static Instance is created by a static function
which will be used by all the users.

--> NO! 

Actually --< this code is not thread safe! (MultiThreading)
Code fails in multithreading.




*/

/*Equal2Delete opertor (from c++ 11) is used when you keep everything public and not making anything private. We have to make copy constructor also private also equal to operator overloading private.

// Double Checking Lock --> Locks are very expensive.
    mtx.lock();


*/