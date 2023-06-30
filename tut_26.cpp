// Friend Function

#include <iostream>
#include <string>
using namespace std;
class Complex
{

  int a, b;

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
  friend Complex sumComplex(Complex o1, Complex o2);  //if not do this we can't access a,b private data on that function
};

Complex sumComplex(Complex o1, Complex o2)
{
  Complex o3;
  o3.setData((o1.a + o2.a), (o1.b + o2.b));
  return o3;
}

int main()
{
  Complex c1, c2,sum;
  c1.setData(1, 4);
  c1.printNumber(); // Your no is: 1 + 4 i

  c2.setData(5, 8);
  c2.printNumber(); // Your no is: 5 + 8 i

  sum = sumComplex(c1, c2);
  sum.printNumber();  //Your no is: 6 + 12 i
}