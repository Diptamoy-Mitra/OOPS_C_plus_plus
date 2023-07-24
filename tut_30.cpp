
// parameterized and default constructor

#include <iostream>
#include <string>
using namespace std;

class Complex
{
  int a, b;

public:
  Complex(int, int);

  void printNumber()
  {
    cout << "Your no is: " << a << " + " << b << " i" << endl;
  }
};
Complex::Complex(int x, int y) // parameterized constructor
{
  a = x;
  b = y;
}

int main()
{

  Complex c(8, 9); // implicit call
  c.printNumber();
  
  // explicit call
  Complex b=Complex(9,7);
  b.printNumber();

  return 0;
}
