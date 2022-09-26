#include "student.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

int main(){
   //users input
vector<Student>studentsIn(5);
    string userName;
    int userID;
    char userGender;
    string userEthnicity;
    string userMajor;
    string userMinor;
    float userGPA;

for (int i =0;i<5;i++){
    cout <<"Enter name: " <<endl;       //prompting the user
    getline(cin, userName);
    cout << " Enter ID: " <<endl;
    cin>>userID;
    cin.ignore();
    cout <<"Enter your gender M/F : " <<endl;
    cin>> userGender;
    cin.ignore();
    cout << "Enter your ethnicity: " <<endl;
    getline(cin,userEthnicity);
    cout << "Enter your Major:" <<endl;
    getline(cin,userMajor);
    cout << "Enter your Minor: " <<endl;
    getline(cin,userMinor);
    cout << "Enter your GPA:" <<endl;
    cin>>userGPA;
    cin.ignore();
studentsIn.at(i) = Student(userName,userID,userGender,userEthnicity,userMajor,userMinor,userGPA);
}

for(int i = 0;i<5;i++){
    studentsIn.at(i).PrintInfo(); //prints the displayed data
}

studentsIn.clear(); //claening up the array


    return 0;
}