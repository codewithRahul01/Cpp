#include <iostream>
using namespace std;

class Employee
{
  int id;
  static int count;

public:
  void setData(void)
  {
    cout << "Enter the id " << endl;
    cin >> id;
    count++;
  }
  void getData()
  {
    cout << "The id of this Employee is " << id << endl
         << "the Employee number is " << count << endl;
  }

//this is static function member it can only access static memmber
  static void getCount(void)
  {
    //cout<<id;   ---->this is not a static member so it gives error
    cout << "The value of count is " <<count << endl;
  }
};

// count is the static data member of class employee
int Employee ::count; // default value of any static variable is 0

int main()
{
  Employee harry, rohan, rahul;

  harry.setData();
  harry.getData();
  Employee::getCount();    // static function can be called without any object

  rohan.setData();
  rohan.getData();
  Employee::getCount();

  rahul.setData();
  rahul.getData();
  Employee::getCount();

  return 0;
}