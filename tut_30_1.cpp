#include <iostream>
#include <string>
using namespace std;
class Point
{
  int a, b;

public:
  Point(int x, int y)
  {
    a = x;
    b = y;
  }
  void display()
  {
    cout << "The point is (" << a << " , " << b <<")"<< endl;
  }
};

int main()
{
  Point p(1, 1);
  p.display();
  Point q(4, 6);
  q.display();
  return 0;
}
//create a function(Hint: friend function) which takes 2 point objects and comupte distance