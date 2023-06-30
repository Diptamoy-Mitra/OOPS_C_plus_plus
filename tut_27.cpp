// Friend classes & member functions in c++
#include <iostream>
#include <string>
using namespace std;

// Forward Declaration
class Complex; // class mojut hai

class calculator
{ // ekhne niye elm jte jnte pare Complex class
public:
  int add(int a, int b)
  {
    return (a + b);
  }
  int sumRealComplex(Complex, Complex); // declare there
  int sumCompComplex(Complex, Complex);
};
class Complex
{

  int a, b;

  //individually declaring function as a friend
  friend int calculator::sumRealComplex(Complex o1, Complex o2); // declaration of friend
  friend int calculator::sumCompComplex(Complex o1, Complex o2);

  //puro class er sb function e friend  krte hole
  // friend class calculator;

public:
  void setData(int v1, int v2)
  {
    a = v1;
    b = v2;
  }
  void printNumber()
  {
    cout << "Your no is: " << a << " + " << b << " i" << endl;
  }
};


int calculator::sumRealComplex(Complex o1, Complex o2) // define here
{
  return (o1.a + o2.a);
}

int calculator::sumCompComplex(Complex o1, Complex o2) // define here
{
  return (o1.b + o2.b);
}

// class calculator{
//   public:
//     int  add(int a, int b){
//       return (a+b);
//     }
//     int sumComplex(Complex o1, Complex o2){
//       return (o1.a+o2.a);
//     }
// };
int main()
{
  Complex o1, o2;
  o1.setData(1, 4);
  o2.setData(5, 7);

  calculator calc;

  int res = calc.sumRealComplex(o1, o2);
  cout << "The sum of real part of o1 and o2 is :" << res << endl; //The sum of real part of o1 and o2 is :6
  res=calc.sumCompComplex(o1,o2);
  cout << "The sum of Comp part of o1 and o2 is :" << res << endl;  //The sum of Comp part of o1 and o2 is :11
  return 0;
}