#include <iostream>
using namespace std;

/*
 Polimorphism
 ---> One name and multiple form
Polymorphism can be of two types
  1. Compile time polymorphism
    It can be achieved using:
      1.1) Function overloading
      1.2) Operator overloading
  2. Run time polymorphism
    It can be achieved using:
      2.1) Virtual Function


*/

class BaseClass
{
public:
  int var_base;

  void display()
  {
    cout << "Displaying Base class variable var_base: " << var_base << endl;
  }
};

class DerivedClass : public BaseClass
{
public:
  int var_derived;

  void display()
  {
    cout << "Displaying Base class variable var_base:" << var_base << endl;
    cout << "Displaying Derived class variable var_derived:" << var_derived << endl;
  }
};
int main()
{
  BaseClass *base_class_pointer;
  BaseClass obj_base;

  DerivedClass obj_derived;
  base_class_pointer = &obj_derived; // base class pointer pointing to derived class object

  base_class_pointer->var_base = 34;
  // base_class_pointer->var_derived=78;   ---> This will throw an error bec it is a base class pointer it cann't access derived class member
  base_class_pointer->display(); // as it is base class pointer then base class display will be invooked
  base_class_pointer->var_base = 545;
  base_class_pointer->display();

  DerivedClass *derived_class_pointer;
  derived_class_pointer = &obj_derived;
  derived_class_pointer->var_derived = 98;
  derived_class_pointer->var_base = 86;

  derived_class_pointer->display(); // In this case binding will be with the display function of derived class

  return 0;
}