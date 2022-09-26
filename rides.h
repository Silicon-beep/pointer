#ifndef RIDES_H
#define RIDES_H
#include "drivers.h"
#include "passengers.h"
#include "ride.h"
#include <vector>
#include <string>
#include <iomanip>
#include <iterator>
#include <algorithm>

using namespace std;

class Rides{
    
    public:
    
    Rides();
    
//    int getcount();
    void inccount();
    void deccount();
    
    void AddRide(Drivers &Drive, Passengers &Pass);
    void editRide(int id);
    void Delete(int id); //deletes the Rides
    void SearchID(int id); //find based based on ID
    int searchPass(); //find ride based on passenger
    int searchDriver(); //search based on driver
    void printList();//prints the list of all entries
    void printDetails(); //drtails for a singe
    void printListRidesPasse(); // list of rides in a particular passenger
    void printListRidesDriver(int ID); //particulardriver
    void printListActive(); //futureandcurrentrides
    void updateRides(); //updateRides
    void cancelRides(int id); //cancels the rides
    void printStatus(); //print status
    
    void update(); //update status
    
    //vector<Ride>rideList;
    
    void loadRide();
    void storeRide();
    
    private: 
vector<Ride>rideList;
int ridecount;
};


#endif