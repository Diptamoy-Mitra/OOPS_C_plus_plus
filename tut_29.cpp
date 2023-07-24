// Constructors in C++

#include <iostream>
#include <string>
using namespace std;

class Complex
{
  int a, b;

public:
  // creating a constractor
  /*
    constructor is a special member function with same name as of the class.It is used to initialized the objects of its class.Its automatticlly invoked.
  */
  Complex(void); // constructor declaration

  void printNumber()
  {
    cout << "Your no is: " << a << " + " << b << " i" << endl;
  }
};
Complex::Complex(void)
{
  a = 10;
  b = 0;
}

int main()
{

  Complex c;
  c.printNumber();

  return 0;
}

