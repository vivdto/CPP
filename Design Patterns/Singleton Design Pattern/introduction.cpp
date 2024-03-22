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

