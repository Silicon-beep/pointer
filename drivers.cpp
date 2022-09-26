
#include "drivers.h"
#include "driver.h"
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
#include <iterator>
using namespace std;
//fi,else.getline
//reading in a fiel, and writing in a file
int Drivers ::getcount(){return drivcount;}
void Drivers:: inccount() {drivcount++;}
void Drivers:: deccount() {drivcount--;}

void Drivers ::addDrive(){ //addrivve
int id;
string name;
int capacity;
float rating;
bool pets;
char choice;
  
  cout << "Enter Name of Driver: " <<endl;
  getline(cin,name);
  
  cout << "Enter the driver capacity:" <<endl;
  cin>>capacity;
  
  cout << "Accepts handicapped T/F? " <<endl;
  cin>>choice;
  
  cout << "Enter rating from 1-5" <<endl;
  cin>>rating;
  
  cout << "Enter when you are avalable" <<endl;
  
  cout<< "Enter if you allow pets " <<endl;
  

    

}
void Drivers:: editDrive(int id){ //edit
for(int i=0;i<driverList.size();i++){
    if(driverList[i]->GetId()==id){
        driverList[i]->editDrive();
    }
}
}

    
void Drivers:: deleteDrive(){ //delete
 Driver* temp;
 int id;
	//find by ID
    for (auto it = driverList.begin(); it !=driverList.end(); it++)
    {
        if ((*it)->GetId() == id)
        {
            driverList.erase(it);
        }
    }
    
}

Driver* Drivers:: findDrive(int id) //find by id
 { //search 
Driver *drives;
for(int i =0; i<drivcount;i++){
    if(driverList[i]->GetId()==id) return driverList[i];
}
return 0;
}

void Drivers:: PrintEntries(){ // pritns list of all entries
    Driver* drives;
    for (auto it = driverList.begin(); it !=driverList.end(); it++)
    {
        drives = *it;
        cout << "Enter Driver ID: " << (*it)->GetId()<<endl;
       cout << " Enter your Name: " <<  (*it)->GetName()<< endl;
		
    }
}

/*void Drivers:: PrintDetailsPass(){ //prints deatils of passenger single
	Driver* drives;

    for (int i =0; i < driverList.size(); ++i)
	{
		if (driverList[i]->GetId() == id)
		{
		    driverList[i].printDriver();
		    
		}
	}

}*/
void Drivers:: PrintRides(){
//print list of rides for all riders
for (int i = 0; i < driverList.size(); i++)
	{
		cout << "The driver name : " << driverList.at(i)->GetName();
		
	}

if (driverList.size() == 0) //when the drivers are not availabe
{
    cout << "drivers is not available." << endl; 
    return;
    
    
}
    }
//roting a list for a particular criver
void Drivers:: PrintSingleRide(){
int id;
for(int i=0;i<driverList.size();i++){
    if(driverList[i]->GetId()==id){
        driverList[i]->PrintInfo();//or driverList[i].PrintInfo()
        }
    }
}

void Drivers:: PrintActive(){ //future and current rides
    
}

void Drivers::loadData(){
    ifstream fin;
    int yourID;
    string yourName;
    int yourcapacity;
    bool yourHandicapp;
    float yourRating;
    bool yourpets;
    bool youravailable;
   // bool yourPets;
    
    fin.open("drivers.dat");
    if(fin.fail()){
        cout << "No Data...." <<endl;
        return;
    }
    
    
for(int i=0;i<drivcount;i++){
    fin>>yourID;
    fin.ignore();
    getline(cin,yourName);
    fin>>yourcapacity;
    fin.ignore();
    fin>>yourHandicapp;
    fin.ignore();
    fin>>yourRating;
    fin.ignore();
    //fin>>yourPets;
    //fin.ignore();
    //from driver.h
Driver* driver = new Driver(yourID,yourName,yourcapacity,yourHandicapp,yourRating,yourpets,youravailable);
driverList.push_back(driver);
    
 }
 fin.close();
}


void Drivers:: storeData(){
    ofstream fout;
    fout.open("driver.dat");
    //don'r forget to print out the total drivers
    for(int i =0;driverList.size();i++){
    fout<<driverList.at(i)->GetId()<<endl;
    fout<<driverList.at(i)->GetName()<<endl;
    //access fet capacity
    fout<<driverList.at(i)->GetHandicapp()<<endl;
    fout<<driverList.at(i)->GetRating()<<endl;


    }
    fout.close();

}


void Drivers:: clean(){
    for(auto it = driverList.begin();it!= driverList.end();++it){
    delete *it;    
    }
    driverList.clear();
}