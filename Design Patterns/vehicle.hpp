/*

A Client --> Asked to Create a Vehical Library! 

Client - > Create Vehical --> 
Give Object <---  (Vehicle)

( BASE CLASS --> Sare)


*/



#ifndef vehicle.hpp
#define vehicle.hpp


class Vehicle
{
    public:
    virtual void createVehicle() = 0; // PURE VIRTUAL FUNCTION WHICH MEANS --> Any class inherting from Vehical will have to implement this perticular function. 



};

#endif