
#ifndef PASSENGER_H
#define PASSENGER_H
#include <string>
#include <vector>
#include <iomanip>
#include <iterator>
using namespace std;

class Passenger{
    
    
    public:
    Passenger(); // default contruictor
    Passenger(string name,int id,string payment,bool handicaaped,float rating,bool pets); //second contrucotr
    
    //mutator
    void setName(string name);
    void setID(int id);
    void setPayment(string payment);
    void setHandicapped(bool handicapped);
    void setRating(float rating);
    void setPets(bool pets);
    //accessors
    string getName();
    int getID();
    string getPayment();
    bool getHandicapped();
    float getRating();
    bool getPets();
    
    void operator = (const Passenger &Pass);

    void editPass();

    void PrintInfo();
    
    private:
    string name;
    int id;
    string payment;
    bool handicapped;
    float rating;
    bool pets;
    
    
    
};

#endif