#include <iostream>
#include <string>
using namespace std;

// class Employee{
//   private:
//     int a,b;
//   public:
//     int c,d,e;
// void setData(int a1,int b1);
// void getData();

// };

// void Employee :: setData(int a1,int b1)
// {
// a=a1;
// b=b1;
// }
// void Employee :: getData(){
//   cout<<"The value of a is "<<a<<endl;
//   cout<<"The value of b is "<<b<<endl;
//   cout<<"The value of c is "<<c<<endl;
//   cout<<"The value of d is "<<d<<endl;
//   cout<<"The value of e is "<<e<<endl;

// }

// int main()
//   Employee harry;
//   //harry.a=2;      <---- we cannot do this bec a is private variable
//   harry.c=45;
//   harry.d=64;
//   harry.e=7;
//   harry.setData(12,56);
//   harry.getData();
//   return 0;
// }
// We can declare the objects along with the class decalration like this ;
/*
 class Employee{
  definition
}harry,rohan,seth;
objects will be created of names harry rohan seth;
*/

// nesting of member Function
// ----> when a function is called in another function

class binary
{
  // by default the member of class are private
private: //--->doesn't make any diff if we write it or not
  string s;
  void chk_bin(void); // when we make it private we cannot call it directly in main function 
  //we can call it in another function but not directly in main

public:
  void read(void);
  void ones_complimant(void);
  void display(void);
};

void binary::read(void)
{
  cout << "Enter a binary number:" << endl;
  cin >> s;
}

void binary ::chk_bin(void)
{
  for (int i = 0; i < s.length(); i++)
  {
    if (s.at(i) != '0' && s.at(i) != '1')
    {
      cout << "Incorrect binary format" << endl;
      exit(0);
    }
  }
}

void binary ::ones_complimant(void)

{
  chk_bin(); // nested function-->we don't want any object to call this function in this way

  for (int i = 0; i < s.length(); i++)
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

void binary ::display(void)
{
  cout << "Display your binary number:" << endl;
  for (int i = 0; i < s.length(); i++)
  {
    cout << s.at(i);
  }
  cout << endl;
  // exit(0);   -->used to end the program
}
int main()
{
  binary b;
  b.read();
  // b.chk_bin();
  b.display();
  b.ones_complimant();
  b.display();
}