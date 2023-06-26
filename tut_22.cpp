//OOPS recap & nesting of member Function
#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
  string s;

public:
  void read(void);
  void chk_bib(void);
  void ones_c(void);
  void display(void);
};
void binary::read(void)
{
  cout << "Enter binary: ";
  cin >> s;
}
void binary::chk_bib(void)
{
  for (int i = 0; i < s.length(); i++)
  {
    if (s.at(i) != '0' && s.at(i) != '1')
    {
      cout << "Incorrect binary " << endl;
      exit(0);
    }
  }
  // cout << "Correct"<<endl;;
}
void binary::ones_c(void)
{
  chk_bib();  //we use such way privately call in inner fuction ete object lage na.
  for (int i = 0; i < s.size(); i++)
  {
    if (s.at(i) == '0')
    {
      s.at(i) = '1';
    }
    else
    {
      s.at(i) = '0';
    }
  }
}
void binary::display(void)
{
  cout << "Display: ";
  for (int i = 0; i<s.size(); i++)
  {
    cout << s.at(i);
  }
  cout << endl;
}

int main()
{
  // OOPs----- > clases and Object

  // C++ ----> initially called ----> c with classes
  // extension of structures are called classes
  // structures had limitations
  // 1. members are public
  // 2. No methods
  // classes----- > structures +more
  //        -----> can have methods and properties
  //        -----> can make few members as private & few as public

  // Nesting of member function

  binary b;
  b.read();
  // b.chk_bib();
  b.display();
  b.ones_c();
  b.display();
  return 0;
}