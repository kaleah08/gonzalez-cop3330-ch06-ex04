/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Kaleah Gonzalez
 */

#include <iostream>
#include "std_lib_facilities.h"
using namespace std;

class Name_value {
  public: 
  Name_value(string n, int s) : name(n), score(s){}
  string name;
  int score;

};

int main()
try
{
  vector<Name_value> nameValue;

  cout << "Enter a set of name-and-value pairs, or 'NoName and '0' to terminate input. \n";

  string tempName;
  int tempScore;
  
  // getting name-and-value pair 
  while (cin >> tempName >> tempScore && tempName!= "NoName") { 
    for (int i = 0; i < nameValue.size(); ++i)
      if (tempName == nameValue[i].name) 
        //checking for duplicate
        error("duplicate: ", tempName); 
        
  nameValue.push_back(Name_value(tempName, tempScore));
}

for (int i = 0; i < nameValue.size(); ++i)
  cout << nameValue[i].name << " " << nameValue[i].score << "\n";

keep_window_open("."); 

}
catch(runtime_error e) {
  cout << e.what() << "\n";
  keep_window_open(".");
}



