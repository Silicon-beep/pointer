#ifndef DRIVERS_H
#define DRIVER_H
#include "driver.h"
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

class Drivers{
    
    public:
    Drivers() { drivcount = 0;}
    int getcount();

    void inccount();		//increment the counter +1
    void deccount();
    void addDrive();
    void editDrive(int id);
    void deleteDrive();
    Driver *findDrive(int id); //find function
    void clean(); //celan up the data
    void PrintEntries(); 
    void PrintDriver();
    void PrintRides(); //print rides for Driver
    void PrintSingleRide();
    void PrintActive();
    void loadData();
    void storeData();
    //vector<Driver>driverList;
    
    private:
    int drivcount;
    vector<Driver*>driverList;
};


//data structure ttht has a driverList
//a list of books instead of one book/


#endif 