#include<iostream>
using namespace std;

class BaseClass{
  public:
    int var_base = 1;

      virtual void display(){     //virtual function
        cout<<"Displaying Base class variable var_base: "<<var_base<<endl;
      }
};

class DerivedClass : public BaseClass{
    public:
    int var_derived = 2;

      void display(){  
        cout<<"Displaying Base class variable var_base: "<<var_base<<endl;
        cout<<"Displaying Derived class variable var_derived: "<<var_derived<<endl;
        
      }
};

int main(){
   BaseClass * base_class_pointer;
    BaseClass obj_base;

    DerivedClass obj_derived;
    base_class_pointer = &obj_base;
    base_class_pointer = &obj_derived;  // Because the function in base class is virtual so the function in derived class will be invoked  
    base_class_pointer->display();

  return 0;

// Example of Virual function  


}