
// //Virtual classes ---->  When a variable is going to be inherited more than 1 time,
// //   then with the help of virtual class variable is inherited single time 

// #include <iostream>
// using namespace std;

// class Student
// {

// protected:
//   int roll_number;

// public:
//   void setData(int r1)
//   {
//     roll_number = r1;
//   }
//   void getData()
//   {
//     cout << "Your roll number is: " << roll_number << endl;
//   }
// };

// class Test : virtual public Student
// {
// protected:
//   float maths, physics;

// public:
//   void set_marks(float m1, float m2)
//   {
//     maths = m1;
//     physics = m2;
//   }
//   void get_marks()
//   {

//     cout << "Your Marks are here:" << endl
//          << "Maths: " << maths << endl
//          << "Physics: "
//          << physics << endl;
//   }
// };
// class Sports : virtual public Student
// {
// protected:
// float score;

// public :
// void set_score(int s1){
//   score=s1;

// }
// void get_score(){
//   cout<<"Your PT score is here: "<<score<<endl;
// }
// };

// class Result : public Test, public Sports{
// float total;
// public:
// void display(){
//   total=maths+physics+score;
//   getData();
//   get_marks();
//   get_score();
//   cout<<"Your Total is:  "<<total<<endl;

// }

// };

// int main()
// {
//   Result harry;
//   harry.setData(1001);
//   harry.set_marks(98,45);
//   harry.set_score(89);
//   harry.display();

//   return 0;
// }



//*************** constructor in derived class *******************

/*

Case1:
class B : public A{
  // Order of execution of constructor -> first A{} then B{}
}

Case2:
class A: public B, public C{
 // Order of execution of constructor -> first B{} then c{} and then A{}
}
 Case3:
 class A: public B, virtual public C{
  // Order of execution of constructor -> first c{} then b{} and then a{}
 }


*/

// #include<iostream>
// using namespace std;

// class Base1{
//   int data1;

//     public:
//       Base1(int b1){
//         data1=b1;
//         cout<<"Base1 class constructor invoked!!"<<endl;

//       }
//       void getData1(){
//         cout<<"The value of data1 is: "<<data1<<endl;

//       }

// };
// class Base2{
//   int data2;

//     public:
//       Base2(int b2){
//         data2=b2;
//         cout<<"Base2 class constructor invoked!!"<<endl;

//       }
//       void getData2(){
//         cout<<"The value of data1 is: "<<data2<<endl;

//       }

// };

// class Derived : public Base1, virtual public Base2{   //--> This order of base1 and base2 will affect he order of execution of constructor of classes 

//   int derived1,derived2;

//     public: 
// // Special syntax of passing value to the constructor of base class by the derived class 
//       Derived(int b1,int b2,int d1,int d2) : Base1(b1),Base2(b2){// This order doesn't affect the order of constructor constructor 
//           derived1=d1;
//           derived2=d2;
//           cout<<"Derived class constructor invoked!!"<<endl;
 
//       }
//       void gatData3(){
//         cout<<"The value of derived1 variable is: "<<derived1<<endl;
//         cout<<"The value of derived2 variable is: "<<derived2<<endl;
//       }
// };


// int main(){
  
//   Derived harry(1, 2, 3, 4);
//   harry.getData1();
//   harry.getData2();
//   harry.gatData3();
//     return 0;
// }


//  *************Initialisation list in constructor*****************


#include<iostream>
using namespace std;

/*
Syntax for initialisation list in constructor :
constructor (argument-list) : initiallisation-section
{
  assignment + other code
}

*/


class Test{

  int a;
  int b;

  public:
  // Test(int i, int j) : a(i),b(j)
  // Test(int i, int j) : a(i),b(i+j)
  // Test(int i, int j) : a(i),b(2*j)
  // Test(int i, int j) : a(i),b(a+j)
  // Test(int i, int j) : b(j),a(i+b)   -->  This will create problem bec 'a' will give garbage value as 'a' is declared before 'b' 
  {
      cout<<"Constructor executed"<<endl;
      cout<<"Value of a: "<<a<<endl;
      cout<<"Value of b: "<<b<<endl;
  }
      
};


int main(){
  
  Test t(4,6);

  return 0;
}