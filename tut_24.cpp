//static datamember & methods 

#include <iostream>
#include <string>
using namespace std;
class Employee
{
  // int count=0; //its for every object, we can't pass it one object to another
  static int count;  //it can share object to object, ekbar e memory nbe , default value 0
  int id;  
public:
  void setData(void)
  {
    cout<<"Enter id: "<<endl;
    cin >> id;
    count++;
  }
  void getData(void){
    cout<<"Id is: ";
    cout<<id <<" and  count is: "<<count<<endl;
  }
  static void getCount(void){  //only access static variables
    cout<<"Conter : "<<count;
  }
};

int Employee::count; 

int main()
{
  Employee harry,rohan,lavish;
  // harry.id=9;  //declared private here can't acces
  harry.setData();
  harry.getData();
 Employee::getCount();


  rohan.setData();
  rohan.getData();
 Employee::getCount();

  lavish.setData();
  lavish.getData();
   Employee::getCount();

}

//without static output are: 
/*
Enter id:
1
Id is: 1 and  count is: 1
Enter id:
2
Id is: 2 and  count is: 1
Enter id:
3
Id is: 3 and  count is: 1



*/

// With static output:- 

/*
Enter id:
1
Id is: 1 and  count is: 1
Enter id:
2
Id is: 2 and  count is: 2
Enter id:
3
Id is: 3 and  count is: 3
*/