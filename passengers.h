#ifndef PASSENGERS_H
#define PASSENGERS_H
#include "passenger.h"
#include <vector>
#include <string>
#include <iterator>
using namespace std;

class Passengers{
    
    public:
    
    int  getCount();
    void inCount();
    void decCount();
    
    void addPass();
    void editPass(int id);
    void deletePass(int id);
    int findPass(int id); //find pass based on id
    //void findPass();//find based on string
    void PrintEntryList(); //print all passengers
    //void PrintDetails();  //prints the detailes for a single entity
    void PrintRidesPass();//list of rides for a particular passenger
    //it also gets a passenger based on ID
    
   void cleanup();
    void loadPassengers();
    void storePassengers();
    //vector<Passengers>passengerList;
    //don't ofget to remove the comment
    private:
    int passcount; //keeps track
    vector<Passenger>passengerList; //total numebr of pass

};





#endif