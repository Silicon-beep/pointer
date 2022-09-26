#include "passenger.h"
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <iterator>
using namespace std;

Passenger::Passenger(){
    name = "";
    id = 0;
    payment = "";
    handicapped = 0;
    rating = 0;
    pets = 0;
}
Passenger::Passenger(string name,int id,string payment,bool handicaaped,float rating,bool pets){
    this->name = name ;
    this->id = id;
    this->payment = payment;
    this->handicapped = handicapped;
    this->rating = rating;
    this->pets= pets;
}
 string Passenger::getName(){
     return name;
 }
int Passenger:: getID(){
    return id;
}
string Passenger:: getPayment(){
    return payment;
}
bool Passenger:: getHandicapped(){
    return handicapped;
}
float Passenger :: getRating(){
    return rating;
}
bool Passenger:: getPets(){
    return pets;
}
void Passenger::editPass(){
    
}

void Passenger::operator= (const Passenger &Pass){
    name = Pass.name;
    id = Pass.id;
    payment =Pass.payment;
    handicapped =Pass.handicapped;
    rating = Pass.rating;
    pets= Pass.pets;
}

void Passenger:: PrintInfo(){
 cout << "Name:" <<endl;
 cout <<"ID: " <<endl;
 cout <<"Preffered payment"<<endl;
 cout << "Handicapped" <<endl;
 cout << "rating "<<endl;
 cout << "pets" <<endl;
}

