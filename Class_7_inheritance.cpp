// #include <iostream>
// using namespace std;

// // Base class
// class Employee
// {

// public:
//   int id;
//   float salary;
//   Employee(int intId)
//   {
//     id = intId;

//     salary = 1000;
//   }
//   Employee(){}
// };

// // Derived class
// /*
// class {{derived-class-name}} : {{visibility-mode}}  {{base-class-name}}
//  {
//   class members/methods/etc....
//  }

// Note:
// 1.visibility mode can be public and private
// 2. when it is public then the public member of base class will become
//  public member of derive class
// 3.when private then public member of base class will become private member of DC

// 4.**********  Default visibility code is private *********
// 5. Private members of base calss are not inherited
// */

// // creating a programmer class derieved from Employee base class

// class Programmer : public Employee{

//   public:
//   Programmer(int inpId){
//     id=inpId;
//     cout<<id<<endl;
//   }
// };

// int main()
// {
// Programmer p1(10);
// cout<<p1.id;
//   return 0;
// }

//  Single Inheritence

// #include <iostream>
// using namespace std;

// class Base
// {
//   int data1;

// public:
//   int data2;

//   void setData();
//   int getData1();
//   int getData2();
// };
// void Base :: setData(){

//   data1=10;
//   data2=20;

// }

// int Base :: getData1(){
// return data1;
// }

// int Base :: getData2(){
// return data2;
// }
// class Derived : public Base
// {
//   int data3;
//   public:
//   void process();
//   void display();

// };

// void Derived :: process(){
// data3= data2 * getData1();

// }
// void Derived :: display(){
//   cout<<"The value of data1 is "<<getData1()<<endl;
//   cout<<"The value of data2 is "<<data2<<endl;
//   cout<<"The value of data3 is "<<data3<<endl;

// }

// int main()
// {
//   Derived d1;
//   d1.setData();                //We are only able to call these base class function because
//   int a=d1.getData1();     //visibility mode is public when it became private //then these method will become private in derived class
//   cout<<"The value of Data 1 is "<<a<<endl;
//   d1.process();
//   d1.display();

//   return 0;
// }

// //  Protected access modifier

// #include<iostream>
// using namespace std;

// class Base {
// protected:
// int a;
// private:
// int b;

// };

// //Proteccted variables can be inherited but cann't be accessed directly from the main function

// /*
// For a protected member:
//                           public derivation      private derivation      protected derivation
//     1. Private member      Not inherited           Not inherited            Not inherited
//     2. Protected member     protected              private                    protected
//     3. Public member        public                  private                   protected

// */

// class Derived : protected Base {

// };

// int main(){

//   Base b;

//   Derived d;
// //  cout<<d.a;     Can't be done bec a is protected and cann't be accessed directly from the main func

//   return 0;
// }

// Multilevel inheritance

// #include <iostream>
// using namespace std;

// class Student
// {

// protected:
//   int rollNumber;

// public:
//   void set_roll_number(int r1)
//   {

//     rollNumber = r1;
//   }
//   void get_roll_number()
//   {

//     cout << "The roll number of student is " << rollNumber << endl;
//   }
// };

// class Exam : public Student
// {

// protected:
//   float maths;
//   float physics;

// public:
//   void set_marks(float m1, float p1)
//   {

//     maths = m1;
//     physics = p1;
//   }
//   void get_marks()
//   {

//     cout << "Marks obtained in Maths are " << maths << endl
//          << "Marks obtained in physics are " << physics << endl;
//   }
// };

// class Result : public Exam
// {
//   float percentage;

// public:
//   void display()
//   {
//     get_roll_number();
//     get_marks();
//     cout << "Your percentage is " << (maths + physics) / 2 << "%" << endl;
//   }
// };

// int main()
// {

//   Result Harry;
//   Harry.set_roll_number(420);
//   Harry.set_marks(95.0, 84.0);
//   Harry.display();

//   return 0;
// }

// Multiple Inheritence -----> Having more than 1 base class and 1 derived class

// #include <iostream>
// using namespace std;
// /*
// Syntax for multiple inheritence:
// class Derived : Visibility-mode base1 , Visibility-mode base2
// {
// derived classs body
// };
// */

// class Base1
// {
// protected:
//   int base_int1;
//   public:
//   void set_base_int1(int a)
//   {
//     base_int1 = a;
//   }
// };
// class Base2
// {
// protected:
//   int base_int2;
//   public:
//   void set_base_int2(int a)
//   {
//     base_int2 = a;
//   }
// };
// class Derived : public Base1, public Base2
// {

// public:
//   void display()
//   {

//     cout <<  "The value of base_int1 is " << base_int1 << endl;
//     cout << "The value of base_int2 is " << base_int2 << endl;
//     cout << "The sum of base_int1 and base_int2 is " << base_int1 + base_int2 << endl;
//   }
// };

// int main()
// {

//   int b1,b2;
//   cout<<"Enter the value of base int 1 and base int 2:"<<endl;
// cin>>b1>> b2;

//   Derived harry;
//   harry.set_base_int1(b1);
//   harry.set_base_int2(b2);
//   harry.display();

//   return 0;
// }

// Ques

/*
Create 2 classes:
   1. SimpleCalculator - Takes input of 2 number using a utility function and
    performs +, -, *, /, and display result using another function
   2. ScientificCalculator - Takes input of 2 number using a utility function and
    performs any four scientific funcction of your choice
    and display result using another function

  Create another class HybridCalculator and inherit it using these 2 classes :
    Q1. What type of inheritence are you using
    Q2. What mode of inheritence are you using

*/

// #include <iostream>
// #include <math.h>
// using namespace std;

// class SimpleCalculator
// {
// protected:
//   int num1, num2;

// public:
//   void setData1(int n1, int n2)
//   {
//     num1 = n1;
//     num2 = n2;
//   }
//   void add()
//   {
//     cout << "Addition of Num1 and Num2 is " << num1 + num2 << endl;
//   }
//   void sub()
//   {
//     cout << "Substraction of Num1 and Num2 is " << num1 - num2 << endl;
//   }
//   void multiply()
//   {
//     cout << "Multiplication of Num1 and Num2 is " << num1 * num2 << endl;
//   }
//   void div()
//   {
//     cout << "Division of Num1 and Num2 is " << num1 / num2 << endl;
//   }
//   void getData1()
//   {
//     cout << "Addition of Num1 and Num2 is " << num1 + num2 << endl;
//     cout << "Substraction of Num1 and Num2 is " << num1 - num2 << endl;
//     cout << "Multiplication of Num1 and Num2 is " << num1 * num2 << endl;
//     cout << "Division of Num1 and Num2 is " << num1 / num2 << endl;
//   }
// };

// class ScientificCalculator
// {

// protected:
//   int num3, num4;

// public:
//   void setData2(int n3, int n4)
//   {
//     num3 = n3;
//     num4 = n4;
//   }
//   void Power()
//   {
//     cout << "Num3 Power Num4 is: " << pow(num3, num4) << endl;
//   }
//   void Square_root()
//   {
//     cout << "Square root of Num3 is " << sqrt(num3) << " and Num4 is: " << sqrt(num4) << endl;
//   }
//   void Sine()
//   {
//     cout << "Sine of Num3 is " << sin(num3) << " and Num4 is: " << sin(num4) << endl;
//   }
//   void Cosine()
//   {
//     cout << "Cosine of Num3 is " << cos(num3) << " and Num4 is: " << cos(num4) << endl;
//   }
//   void getData2()
//   {
//     cout << "Num3 is to Power Num4 is: " << pow(num3, num4) << endl;
//     cout << "Square root of Num3 is " << sqrt(num3) << " and Num4 is: " << sqrt(num4) << endl;
//     cout << "Sine of Num3 is " << sin(num3) << " and Num4 is: " << sin(num4) << endl;
//     cout << "Cosine of Num3 is " << cos(num3) << " and Num4 is: " << cos(num4) << endl;
//   }
// };

// class HybridCalculator : public SimpleCalculator, public ScientificCalculator
// {
// public:
//   void display3()
//   {
//     getData1();
//     getData2();
//   }
// };

// int main()
// {
//   HybridCalculator s1;
//   s1.setData1(111, 13);
//   s1.setData2(4, 2);
//   s1.display3();
//   return 0;
// }







// Ambiguidy resolution in Inheritence
//   -->When there are two members wwith same name then compiler get confused whom to choose  

#include <iostream>
using namespace std;

class Base1
{

public:
  void greet()
  {
    cout << "How are you?" << endl;
  }
};

class Base2
{

public:
  void greet()
  {
    cout << "Kaiso ho?" << endl;
  }
};
class Derived : public Base1, public Base2 {
public:

//Ambiguidy resolution 
void greet(){
  Base2::greet();
}
};

int main()
{
Base1 b1;
b1.greet();
Base2 b2;
b2.greet();

Derived d1;
d1.greet();
  return 0;
}