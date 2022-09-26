#include <iostream>
#include "passenger.h"
#include "passengers.h"
#include <vector>
#include <string>
#include <iterator>
#include <iomanip>
#include <fstream>

using namespace std;

//collection
void Passengers:: addPass(){
    string name;
    int ID;
    string Payment;
    bool Handicapped;
    float rating;
    bool pets;
cout << "Enter name of Passenger: "<<endl;
getline(cin,name);

cout<< "Enter your ID;";
cin>>ID;
cin.ignore();

cout <<"Enter your Payment Method: 'c'-credit; 'd'-debit;'m'-cash";
cin>>Payment;

cout <<"Are you Handicapped: Y/N"<<endl;
cin>>Handicapped;
if(Handicapped=='Y' ||Handicapped =='y'){
    Handicapped = true;
}
else{
    Handicapped = false;
}

cout<< "Rating for Passengers " <<endl; 
cin>>rating;
cin.ignore();

cout << "Any pets" <<endl;
cin>>pets;
cin.ignore();
if(pets == 'Y'||pets=='y'){
    pets =true;
}
else{
    pets == false;
}
}
void Passengers:: editPass(int id){
    for(int i=0;i<passengerList.size();i++){
        if(passengerList[i].getID()==id){
            passengerList[i].editPass();
        }
    }
    
}
void Passengers:: deletePass(int id){
    char input;
    for (int i=0;i<passengerList.size();i++){
    if (passengerList[i].getID()==id){
        passengerList[i].PrintInfo();
    do{
    cout << "Delete Passenger: Y/N: " <<endl;
    cin>>input;
    }while(input!='Y'&input!='N');
if(input == 'Y'){
    passengerList.erase(passengerList.begin()+i);
    break;
}
  else{
      cout << "Cancelled"<<endl;
  }  
        }    
    }
//cout << "Enter book ID to delete: ";
//	cin >> id;
}

int Passengers:: findPass(int id){
    for(int i=0;i<passengerList.size();i++){
        if(passengerList[i].getID()==id){
            return passengerList[i].getID();
        }
    }
    return 0;
}

void Passengers :: PrintEntryList(){
    for(int i=0;i<passengerList.size();i++){
    passengerList[i].PrintInfo();
    }
if(passengerList.size()==0){
    cout << "No passengers. "<<endl;
}
}

/*void Passengers::PrintDetails(){
    
}*/
void Passengers:: PrintRidesPass(){
   int id;
    for(int i=0;i<passengerList.size();i++){
    if(passengerList[i].getID()==id){
        passengerList[i].PrintInfo();
    }
    else if(passengerList.size()==0){
        cout << "NO Passenger."<<endl;
    }
} 
}
void Passengers:: cleanup(){

}
void Passengers:: loadPassengers(){
   ifstream fin;
    string name;
    int id;
    string payment; //payment prefernce
    bool handicapped;
    float rating;
    bool pets;
    fin.open("passengers.dat");
    if(fin.fail()){
        cout << "Unable to open the file." <<endl;
    }
   fin>>passcount;
   for(int i=0;i<passcount;i++){
   getline(cin,name);
   fin>>id;
   cin.ignore();
   getline(cin,payment);
   fin>>handicapped;
   cin.ignore();
   fin>>rating;
   cin.ignore();
   fin>>pets;
   cin.ignore();
   Passenger myPassenger(name,id,payment,handicapped,rating,pets);
  passengerList.push_back(myPassenger);
}
fin.close();
}

void Passengers:: storePassengers(){
    ofstream fout;
    fout.open("passengersOutput.dat");
    fout<<passcount<<endl;
    for(int i=0;i<passengerList.size();i++){
    fout << passengerList[i].getName()<<endl;
    fout<<passengerList[i].getID()<<endl;
    fout<<passengerList[i].getPayment()<<endl;
    fout<<passengerList[i].getHandicapped()<<endl;
    fout<<passengerList[i].getRating()<<endl;
    fout<<passengerList[i].getPets()<<endl;  
    }
    fout.close();
}