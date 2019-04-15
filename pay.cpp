//Bijaya Shrestha
//section 2

#include <iostream>
#include <fstream>
#include <string>
#include<iomanip>
#include<vector>
#include "person.cpp"

using namespace std;

void readData(vector <Person> & employees){
  string fName;
  string lName;
  float rate;
  float hours;
  ifstream inputfile;
  inputfile.open ("input.txt");
  if (inputfile.is_open())
  {
    while (!inputfile.eof()){
      inputfile>>fName;
      inputfile>>lName;
      inputfile>>rate;
      inputfile>>hours;
    employees.emplace_back(fName,lName,rate,hours);
  }
}
  inputfile.close();
}

void writeData(vector <Person> employees){
      ofstream outputfile;
      outputfile.open("outputfile.txt");
      for (int i =0; i< employees.size(); i++){
      outputfile <<employees.at(i).fullName()<< " " << employees.at(i).totalPay()<< endl;
      }
      outputfile.close();
      }

int main()
{
  vector <Person>  employees;
  readData(employees);
  writeData(employees);
 cin.get();
  return 0;
}
