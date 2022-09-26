#include "student.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

Student :: Student () { //default contrcutor
    name = "";
    ID = 0;
    gender = ' ';
    ethnicity = "";
    major = "";
    minor = "None";
    gpa = 0;
}
Student:: Student(string name,int ID,char gender,string ethnicity,string major,string minor,float gpa){
    this->name = name;
    this->ID = ID;
    this->gender = gender;
    this->ethnicity = ethnicity;
    this->major = major;
    this->minor = minor;
    this->gpa = gpa;
}
string Student :: getName() const{
    return name;
}
int Student :: getID() const{
    return ID;
}
char Student :: getGender() const{
    return gender;
}
string Student:: getEthnicity() const{
    return ethnicity;
}
string Student:: getMajor() const{
    return major;
}
string Student :: getMinor () const{
    return minor;
}
float Student :: getGpa () const{
    return gpa;
}
void Student :: PrintInfo() const{
    cout << "Name:" <<name <<endl;
    cout << "ID: " <<ID<<endl;
    cout << "Gender: " <<gender <<endl;
    cout << "Ethnicity" <<ethnicity<<endl;
    cout << "Major:" <<major<<endl;
    cout << "Minor: " <<minor<<endl;
    cout << "Cummulative GPA: " <<fixed<<setprecision(2)<<gpa<<endl;
}