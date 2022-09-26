#include <iostream>
#include "ride.h"
#include "rides.h"
#include <iomanip>
#include <iterator>
#include <fstream>
#include <ctime>
#include <algorithm>
#include <vector>
// the functions from the collection class
using namespace std;

//int Rides:: getcount(){ return int;}
void Rides :: inccount(){}
void Rides:: deccount(){}


void Rides::AddRide(Drivers &Drive, Passengers &Pass){
int id; string name;
cout << "Enter your ID:";
cin>>id;
cin.ignore();
cout<< "Enter name:";
getline(cin,name);
//driver is avalable
//driver has seats
//pet 
}

void Rides::printList(){
    for(int i=0;i<rideList.size();i++){
        rideList[i].printRides();
    }
    if(rideList.size()==0){
        cout << "No rides" <<endl;
    }
}

void Rides::SearchID(int id){ //find 
do{
    for(int i=0;i<rideList.size();i++){
        if(rideList[i].getID()==id){
            cout<<"Ride avalable."<<endl;
            return;
        }
    }
cout<<endl;
cout << "Ride unavailable. "<<endl;
 }while(id !=0); 
}

void Rides::printListRidesPasse(){
}


void Rides::printListRidesDriver(int id){
for(int i=0;i<rideList.size();i++){
    if(rideList[i].getID()==id){
        rideList[i].printRides();
    }
}
    }


void Rides::editRide(int id){
    for(int i =0;i<rideList.size();i++){
        if(rideList[i].getID()==id){
            rideList[i].editRide();
        }
    }
}


void Rides::Delete(int id){
int i;
char options;
if(rideList[i].getID()==id){
    rideList[i].PrintInfo();}
    do{
        cout << "Enter ID if you want to delete ID:";
    }while(options != 'Y' & options !='N' & options!='y' &options!='n');
    if (options == 'Y' || options =='y')
    {
    rideList.erase(rideList.begin()+i);
    }
    else{
            cout << "ID is not available."<<endl;
        }
    
}


void Rides:: cancelRides(int id){
    for(int i=0;i<rideList.size();i++){
        if(rideList[i].getID()==id){
         //   rideList[i].setStatus(string status);
            rideList[i].printRides();
        }
    }
} //cancels the rides

    
void Rides:: loadRide(){
    ifstream fin;
    int Myid;
    int MygetID;
    string MygetPickup;
    time_t MygetPickupTime;
    string MygetDropOff;
    int MygetSize;
    bool MygetPets;
    time_t MygetDropoffTime;
    int MygetStatus;
    float MygetRating;
    
    
    fin.open("rideload.dat");
    if(fin.fail()){
        cout << "Error." <<endl;
        return;
    }
fin>>ridecount;
fin.ignore();
 for(int i=0;i < ridecount;i++){
    fin>>MygetID;
    fin.ignore();
    getline(fin,MygetPickup);
    fin>>MygetPickupTime;
    fin.ignore();
    getline(fin,MygetDropOff);
    fin>> MygetSize;
    fin.ignore();
    fin>> MygetPets;
    fin.ignore();
    fin>> MygetDropoffTime;
    fin.ignore();
    fin>> MygetStatus;
    fin.ignore();
    fin>> MygetRating;
    fin.ignore();

Ride myRide(MygetID,MygetPickup,MygetPickupTime,MygetDropOff,MygetSize,
    MygetPets,MygetDropoffTime,MygetStatus,MygetRating);
rideList.push_back(myRide);
}
fin.close();
}

void Rides::update(){
    for(int i=0;i<rideList.size();i++){
        if(rideList[i].getStatus()){
            rideList[i].updateRideStatus();
        }
    }
}

void Rides:: storeRide(){
    ofstream fout;
    fout.open("Rides.dat");
    fout << rideList.size()<<endl;
    
    for(int i=0;i<rideList.size();i++){
    fout<<rideList[i].getID();
    fout<<rideList[i].getPickup();
    fout<<rideList[i].getPickupTime();
    fout<<rideList[i].getDropOff();
    fout<<rideList[i].getSize();
    fout<<rideList[i].getPets();
    fout<<rideList[i].getDropoffTime();
    fout <<rideList[i].getStatus();
    fout<<rideList[i].getRating();
    }
    fout.close();
}