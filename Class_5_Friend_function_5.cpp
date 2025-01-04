// friend function

// #include <iostream>
// using namespace std;

// class complex
// {
//   int a, b;

// public:
//   void setData(int v1, int v2)
//   { 
//     a = v1;
//     b = v2;
//   }
//   void printData()
//   {
//     cout << "Your number is " << a << "+" << b << "i" << endl;
//   }
//   // friend function can have access of all the data of class
//   friend complex sumcomplex(complex o1, complex o2);
// };
// complex sumcomplex(complex o1, complex o2)
// {
//   complex o3;
//   o3.setData((o1.a + o2.a), (o1.b + o2.b));
//   return o3;
// }

// int main()
// {
//   complex c1, c2, sum;
//   c1.setData(1, 4);
//   c1.printData();

//   c2.setData(3, 8);
//   c2.printData();

//   sum = sumcomplex(c1, c2);
//   sum.printData();
//   return 0;
// }
/*
properties of friend function

1. Not on scope of class
2. It is called like an ordinary function not with the object c1.sumcomplex()<--- Invalid
3. Can be declared inside public as wall as private section of class
4. It cannot access the member of class directly by their names ,for that
it need the object to acces any member

*/

// #include <iostream>
// using namespace std;

// class complex;

// class calculate
// {
// public:
//   int sum(int a, int b)
//   {
//     return a + b;
//   }

//   void sumrealComplex(complex, complex);
//   void sumimaginaryComplex(complex, complex);
// };

// class complex
// {
//   int a, b;

// public:
//   void setData(int v1, int v2)
//   {
//     a = v1;
//     b = v2;
//   }

//   void printData()
//   {
//     cout << "Your complex number is " << a << "+" << b << "i" << endl;
//   }
//   //Individaully declaraing function as a friend function
//   // friend void calculate::sumrealComplex(complex o1, complex o2);
//   // friend void calculate::sumimaginaryComplex(complex o1, complex o2);

//   //Declaring the entire class as friend to make its all function access any private data of other class 
//   friend class calculate ;

// };

// void calculate::sumrealComplex(complex o1, complex o2)
// {
//   cout << "Sum of real part of complex no is " << o1.a + o2.a << endl;


// }

// void calculate ::sumimaginaryComplex(complex o1, complex o2)
// {
//   cout << "Sum of imaginary part of complex no is " << o1.b + o2.b << "\n";
// }
// int main()
// {
//   complex c1, c2, sum;

//   c1.setData(1, 2);

//   c2.setData(5, 34);

//   calculate cal;
//   cal.sumrealComplex(c1, c2);
//   cal.sumimaginaryComplex(c1, c2);

//   return 0;
// }



#include<iostream>
using namespace std;
class X;
class Y;

class X{
int data;

public:

void setData(int value ){
  data= value;
}
friend int add(X,Y);

};

class Y{
int num;

public:

void setData(int value ){
  num= value;
}
friend int add(X,Y);
};

int add(X o1,Y o2){
cout<<"The sum of data of Class X and Y is "<< o1.data + o2.num ;     
}

int main(){
  class X a;
  class Y b;
  a.setData(23);
  b.setData(56);
  int sum= add(a,b);

    return 0;
}  