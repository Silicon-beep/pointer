#ifndef RIDEH
#define RIDEH
#include <ctime>
#include <string>
#include <vector>
#include <iomanip>
#include <iterator>
using namespace std;

class Ride{
    
    public:
    Ride();// default
    Ride(int id,string pickup,time_t pickupTime,string dropoff,int size,bool pets,time_t dropoffTime,char status,float rating);
    //mutator
    void setID(int id){id =id;}
    void setPickup(string pickup){pickup=pickup;}
    void setPickupTime(time_t pickupTime){pickupTime=pickupTime;}
    void setDropOff(string dropoff){dropoff=dropoff;}
    void setSize(int size){size=size;}
    void setPets(bool pets){pets=pets;}
    void setDropOffTime(time_t dropoffTime){dropoffTime=dropoffTime;}
    void setStatus(char status){status=status;}
    void setRating(float rating){rating =rating;}
    
    /* void setPassID(int passID);
    void setDriveID(int driveID);*/
    
    void editRide();
    
    void printRides(); //pritn rides for a driver
    void updateRideStatus();
    
    void operator = ( const Ride &Rides);
    
    int getID();
    string getPickup();
    time_t getPickupTime();
    string getDropOff();
    int getSize();
    bool getPets();
    time_t getDropoffTime();
    char getStatus();
    float getRating();
    void PrintInfo(); 
    
    private:
    int id;
    string pickup;
    time_t pickupTime;
    string dropoff;
    int size; //size of party
    bool pets;
    time_t dropoffTime;
    char status; //active
    float rating;
    
};

#endif