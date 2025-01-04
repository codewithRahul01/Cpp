#include <iostream>
using namespace std;

class Shop
{
  private:
  int item_Id[100];
  int itemPrice[100];
  int counter;
  int a;

public:
  void initcounter()
  {
    counter = 0;
  }
  void inita()
  {
    a = 1;
  }
  void setPrice(void);
  void displayPrice(void);
};

void Shop::setPrice(void)
{
  cout << "Enter the Id of item no " << counter + 1 << endl;
  cin >> item_Id[counter];

  cout << "Enter the Price of your item " << endl;
  cin >> itemPrice[counter];
  counter++;
}
void Shop ::displayPrice()
{
 
  for (int i = 0; i < counter; i++)
  {
    cout << "The price of item with item Id " << item_Id[i] << " is " << itemPrice[i] << " in dukaan no " << a << endl;
  }
  a++;
}

int main()
{
  Shop dukaan;
  dukaan.initcounter();
  dukaan.inita();
  // dukaan.setPrice();
  // dukaan.setPrice();
  // dukaan.setPrice();
  for (int i = 0; i < 2; i++)
  {
    dukaan.setPrice();
  }
  dukaan.displayPrice();
  Shop dukaan2;
  dukaan2.initcounter();
  dukaan2.setPrice();
  dukaan2.displayPrice();

  return 0;
}