//array of object 

#include <iostream>

using namespace std;

class Employee{
  int id;  
  int salary;
  public:
  void setId(void){
cout<<"Enter the id of employee:"<<endl;
cin>>id;
  }

  void getId(void){
    cout<<"The id of this employee is "<<id<<endl;
  }
};

// class complex
// {
//   int a;
//   int b;

// public:
//   void setData(int v1, int v2)
//   {
//     a = v1;
//     b = v2;
//   }
//   void setDatabysum(complex o1, complex o2)
//   {
//     a = o1.a + o2.a;
//     b = o1.b + o2.b;
//   }
//   void printData(){
//     cout<<"Your complex no is "<<a<<"+"<<b<<"i"<<endl;
//   }
// };
int main()
{
    Employee fb[5];
    for (int i = 0; i < 5; i++)
    {
  fb[i].setId();
  fb[i].getId();
    }
// complex c1,c2,c3;
// c1.setData(1,2);
// c1.printData();

// c2.setData(13,4);
// c2.printData();

// c3.setDatabysum(c1,c2);
// c3.printData();

//   return 0;
}