
#ifndef DRIVERH
#define DRIVERH
#include <string>
#include <iomanip>

using namespace std;
class Driver{
    private:
        int id;
        string name;
        int numOfPassenger; //capacity
        bool handiCapp;
        float rating;
        bool pets;
        bool available;
    public:
    Driver();
    Driver(int id, string name, int numOfPassenger,bool handiCapp, float rating,bool pets,bool available);
    void SetId(int userId){id=id;}  //mutator
    void SetName(string userName){name=name;}
    void SetPassenger(int thePassenger){numOfPassenger=numOfPassenger;}
    void SetHandicapp(bool thehandiCapp){handiCapp=handiCapp;}
    void SetRating(float userRating){rating=rating;}
    void Setpets(bool userpets){pets =pets;}
    void Setavailable(bool useravailable){available=available;}
   /* void SetPets(bool userpets);
    void SetPetallowed(bool thePetsallowed);
    void Setdays(int userDays);
    void SetHours(int userHours);
    void SetArea(string userArea);*/
    int GetId(); //accessor
    string GetName();
    int GetPasseger();
    bool GetHandicapp();
    float GetRating();
    void operator = (const Driver &Drives);

    /*bool GetPets();
    bool GetPetsaedllow();
    int GetDays ();
    int GetHours();
    string GetArea();*/
    void editDrive();//edit driver
	void PrintInfo();
    
};

#endif