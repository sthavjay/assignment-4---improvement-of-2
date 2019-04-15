#include <iostream>
#include <string>
#include "person.h"

using namespace std;

Person:: Person(string fName, string lName, float rate, float hours){
  firstName = fName;
  lastName = lName;
  payRate = rate;
  hoursWorked = hours;
}
void Person::setFirstName(string fName){ firstName = fName; }
string Person::getFirstName() {    return firstName;    }

void Person::setLastName (string lName) { lastName = lName;}
string Person::getLastName() {    return lastName;}

void Person::setPayRate (float rate) { payRate = rate;}
float Person::getPayRate() {  return payRate; }

void Person::setHoursWorked (float hours) { hoursWorked = hours;}
float Person::getHoursWorked(){  return hoursWorked;}

float Person:: totalPay(){
  return payRate * hoursWorked;
}

string Person:: fullName(){
return firstName +" "+lastName;
}
