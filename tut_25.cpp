//Arrays of object 

#include<iostream>
using namespace std;

class Employee{
  int id;
  int salary;
  public:
    void setId(){
      salary=122;
      cout<<"Enter Id: ";
      cin>>id;
    }
     void getId(){
      
      cout<<" Id is: "<<id<<endl;

    }

};


int main()
{
  // Employee harry,rohan, lovish, shruti;
  // harry.setId();
  // harry.getId();

  Employee fb[4];
  for (int i = 0; i < 4; i++)
  {
     fb[i].setId();
     fb[i].getId();
  }
  
   

  return 0;
}