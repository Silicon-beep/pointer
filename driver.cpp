#include "driver.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//  Define default constructor
Driver::Driver() {
   id = 0;
   name = "NO Name";
   numOfPassenger = 0;
   handiCapp = " ";
   rating = 0;
   pets = true;
   available=true;
}
Driver::Driver(int id, string name, int numOfPassenger,bool handiCapp, float rating,bool pets,bool available) {
   this->id= id;
   this->name = name;
   this->numOfPassenger = numOfPassenger;
   this->handiCapp = handiCapp;
   this->rating = rating;
   this->pets=pets;
   this->available=available;
}
int Driver :: GetId(){
    return id;
}
string Driver :: GetName() {
    return name;
}
int Driver:: GetPasseger(){
    return numOfPassenger;
}

bool Driver:: GetHandicapp(){
    bool handiCapp = true;
    if(handiCapp != 1){
        return false;
    }
    else{
        return true;
    }
}

float Driver :: GetRating(){
    return rating;
}
void Driver:: editDrive(){
int option;
int userId; //driver id
string userName; //driver name
int thePassenger; //the capacity of driver
char thehandiCapp; //handicapp choice
float userRating; //the rating 
cout << "Enter your ID:" <<endl;
cin>>userId;
cin.ignore();

do{
    cout << "SELECT THE NUMBER TO EDIT" <<endl;

	cout << "'1' to edit name" << endl;
	cout << "'2' to edit vehicle capacity" << endl;
	cout << "'3' to edit handicapp" << endl;
	cout << "'4' to edit vehicle type" <<endl;
	cout << "'5' to edit driver Rating" << endl;
	cout << "'6' to edit the avalabilty" <<endl;
	cout << "'7' to edit pets is allowed" <<endl;
	cout << "'8' to quit" << endl;
	
	cout << "Select an option: " << endl;
	cin>>option;
	cin.ignore();
	
	switch(option){
	case 1:
	cout << "plase enter the name";
	getline(cin,name);
	break;
	
	case 2:
	cout<< "edit vehcle capacity "<<endl;
	break;
	
	case 3:
	cout << "edit to Handicapped" <<endl;
	break;
	
	case 4:
	cout<< "driver vehicle type " <<endl;
	break;
	
	case 5:
	cout << "driver rating to " <<endl;
	break;
	
	case 6:
	cout << "driver avalaibility " <<endl;
	break;
	
	case 7:
	cout << "'7' to edit pets is allowed" <<endl;
	break;
	
	case 8:
	cout << "'8' to quit" << endl;

    default:
    cout<< "option not available"<<endl;
    break;

	
	}
    
}while(option!=8);

}

void Driver:: operator = (const Driver &Drivers){
id=Drivers.id;
name =Drivers. name;
numOfPassenger =Drivers.numOfPassenger;
handiCapp =Drivers.handiCapp;
rating = Drivers.rating;
pets=Drivers.pets;
available=Drivers.available;
    
}


void Driver :: PrintInfo(){ //print method
    cout << "Name :" <<name<<endl;
    cout << "ID :" <<id <<endl;
    cout << "Number of Passengers: " << numOfPassenger <<endl;
    cout << "Handicapped Capable: " << handiCapp<<endl;
    cout << "The rating :" <<fixed<<setprecision(2)<<rating <<endl;
}
