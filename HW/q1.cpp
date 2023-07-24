// create a function(Hint: friend function) which takes 2 point objects and comupte distance

#include <bits/stdc++.h>
using namespace std;
class Point
{
  int x;
  int y;
  friend void make_corordinate(Point, Point);

public:
  Point(int a, int b)
  {
    x = a;
    y = b;
  }

  void display(void)
  {
    cout << "Values " << x << " " << y << " ";
  }
};
void make_corordinate(Point o1, Point o2)
{
  float dis = sqrt(pow((o1.x - o2.x), 2) + pow((o1.y - o2.y), 2));
  cout << "distance: " << dis << endl;
}

int main()
{
  Point a(1, 2);
  a.display();
  Point b(3, 4);
  b.display();

  make_corordinate(a, b);

  return 0;
}
