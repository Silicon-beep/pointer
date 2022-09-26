#ifndef STUDENTH
#define STUDENTH
#include <iomanip>
#include <string>
using namespace std;

class Student{
    public:
    Student(); //default contructor
    Student(string name,int ID,char gender,string ethnicity,string major,string minor,float gpa); //contructor with parameter
    void setName(string name);
    void setID(int ID);
    void setGender(char gender);
    void setEthnicity(string ethnicity);
    void setMajor(string major);
    void setMinor(string minor);
    void setGpa(float gpa);
    string getName() const;
    int getID() const;
    char getGender() const;
    string getEthnicity() const;
    string getMajor() const;
    string getMinor() const;
    float getGpa() const;
    
    void PrintInfo() const;
    
    private:
    string name;
    int ID;
    char gender;
    string ethnicity;
    string major;
    string minor;
    float gpa;
};

#endif