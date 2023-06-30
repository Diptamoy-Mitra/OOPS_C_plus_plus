// C++ Objects memory allocation & Using Arrays in Classes
#include <iostream>
#include <string>
using namespace std;

class Shop
{
  int ItemID[100];
  int itemPrice[100];
  int counter;

public:
  void initCounter(void)
  {
    counter = 0;
  }
  void getPrice(void);
  void setPrice(void);
};
void Shop::setPrice(void)
{
  cout << "Enter Id of your Item no: " << counter + 1 << endl;
  cin >> ItemID[counter];
  cout << "Enter price of your Item: " << endl;
  cin >> itemPrice[counter];
  counter++;
}
void Shop::getPrice(void)
{
  for (int i = 0; i < counter; i++)
  {
    cout << "The price of item with ID: " << ItemID[i] << " is " << itemPrice[i] << endl;
  }
}

int main()
{
  Shop dukaan;
  dukaan.initCounter();
  dukaan.setPrice();
  dukaan.setPrice();
  dukaan.getPrice();
}