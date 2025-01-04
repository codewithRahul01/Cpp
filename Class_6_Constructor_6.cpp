// // Constructor



// #include <iostream>
// using namespace std;

// class Complex
// {
//   int a, b;

// public:

//   // creating a constructor
//   // A constructor is a special member function with the same name as of class
//   // It is used to initialise the object of its class.
//   //It is automatically invoked whenever the object is created(invoked meaning call or execute)

//       Complex(void); // Constructor declaration

//   void printData()
//   {
//     cout << "Your complex number is " << a << "+" << b << "i" << endl;
//   }
// };
// Complex ::Complex(void)
// { // It is a default constructor as it takes no parameter
//   a = 10;
//   b = 20;
// }

// int main()
// {
//   Complex c1;
//   c1.printData();

//   return 0;
// }






// // Properties of constructor

// /*
// 1. It should be declared in public section of the class.
// 2. They are automatically invoked whenever the object is created.
// 3. They can not return value and do not have return type
// 4. It can have default argument
// 5. we cannot refer to their address

// */







// Parameterized Constructor




// #include <iostream>
//     using namespace std;

// class Complex
// {
//   int a, b;

// public:
//   Complex(int, int);
//   void printData()
//   {
//     cout << "Your complex number is " << a << "+" << b << "i" << endl;
//   }
// };

// Complex::Complex(int x, int y)
// { // This is parameterized constructor as it take parameter
//   a = x;
//   b = y;
// }

// int main()
// {
//   // implicit way to call
//   Complex c(4, 6);
//   // Explicit way  to call
//   Complex b = Complex(45, 66);
//   c.printData();
//   b.printData();

//   return 0;
// }

// #include <iostream>
// using namespace std;

// class Point
// {
//   int x, y;

// public:
//   Point(int a, int b)
//   {
//     x = a;
//     y = b;
//   }
//   void printData()
//   {
//     cout << "Your point is (" << x << "," << y << ")" << endl;
//   }
// };

// int main()
// {
//   Point p(-21, 39);
//   p.printData();

//   Point q(-3, 34);
//   q.printData();
//   return 0;
// }





// Create a function which take to point and find the area between them

// #include <iostream>
// #include <math.h>
//     using namespace std;

// class Point
// {
//   int x, y;

// public:
//   Point(int a, int b)
//   {
//     x = a;
//     y = b;
//   }

//   void displayData()
//   {
//     cout << "Your point is (" << x << "," << y << ")" << endl;
//   }
//   friend float area(Point, Point);
// };

// float area(Point o1, Point o2)
// {
//   float area = sqrt((o1.x - o2.x) * (o1.x - o2.x) + (o1.y - o2.y) * (o1.y - o2.y));
//   cout << "The area is " << area << endl;
// }

// int main()
// {
//   Point p = Point(20, 0);
//   p.displayData();

//   Point q(0, 0);
//   q.displayData();

//   float a = area(p, q);

//   return 0;
// }






//  constructor overloading

// #include<iostream>
// using namespace std;

// class Complex {
//   int a,b;

//   public:
//   Complex (int v1,int v2){
//     a=v1;
//     b=v2;

//   }
//   Complex (int x){
//     a=x;
//     b=23;
//   }

//   Complex(){
//     a=12;
//     b=34;
//   }
//   void printData(){
//     cout<<"Your compelx number is "<<a<<"+"<<b<<"i"<<endl;
//   }
// };

// int main(){
//   Complex c1(1,2);
//   c1.printData();

//   Complex c2(3);
//   c2.printData();

//   Complex c3;
//   c3.printData();
//   return 0;
// }





//       CONSTRUCTOR DYNAMIC INITIALISATION

// #include<iostream>
// using namespace std;

// class BankDeposit{
//     int principal;
//     int years;
//     float interestRate;
//     float returnValue;

//     public:
//         BankDeposit(){}       //  This is necessary bec when your are making more then one object in main it call constructor with no argument it doesn't match any constructor so it gave error
//         BankDeposit(int p, int y, float r){
//     principal = p;
//     years = y;
//     interestRate = r;
//     returnValue = principal;
//     for (int i = 0; i < y; i++)
//     {
//         returnValue = returnValue * (1+interestRate);
//     }
// } // r can be a value like 0.04
//         BankDeposit(int p, int y, int r){
//     principal = p;
//     years = y;
//     interestRate = float(r)/100;
//     returnValue = principal;
//     for (int i = 0; i < y; i++)
//     {
//         returnValue = returnValue * (1+interestRate);
//     }
// } // r can be a value like 14
//         void show(){
//     cout<<endl<<"Principal amount was "<<principal
//         << ". Return value after "<<years
//         << " years is "<<returnValue<<endl;
// }
// };
// // BankDeposit :: BankDeposit(int p, int y, float r)
// // {
// //     principal = p;
// //     years = y;
// //     interestRate = r;
// //     returnValue = principal;
// //     for (int i = 0; i < y; i++)
// //     {
// //         returnValue = returnValue * (1+interestRate);
// //     }
// // }

// // BankDeposit :: BankDeposit(int p, int y, int r)
// // {
// //     principal = p;
// //     years = y;
// //     interestRate = float(r)/100;
// //     returnValue = principal;
// //     for (int i = 0; i < y; i++)
// //     {
// //         returnValue = returnValue * (1+interestRate);
// //     }
// // }
// int main(){

//     BankDeposit bd1, bd2, bd3;     /// When making object constructor is called but we donot have any empty contructor it doesn't match any constr uctor and give error
//     int p, y;
//     float r;
//     int R;

//     cout<<"Enter the value of p y and r"<<endl;
//     cin>>p>>y>>r;
//     bd1 = BankDeposit(p, y, r);
//     bd1.show();

//     cout<<"Enter the value of p y and R"<<endl;
//     cin>>p>>y>>R;
//     bd2 = BankDeposit(p, y, R);
//     bd2.show();
//     return 0;
// }






// //COPY CONSTRUCTOR

// #include<iostream>

// using namespace std;

// class Number {
// int a;

// public:

// Number(){
//     a=0;
// }
// Number(int num){
// a=num;

// }
// //When no copy constructor is given then compiler send it own copy constructor
// Number(Number &obj){
//     cout<<"Copy Constructor called!!!!"<<endl;

// a=obj.a;

// }

// void show (){
//     cout<<"The value of number is "<<a<<endl;
// }
// };

// int main(){
// Number x,y,z(45),z2;

// x=Number(10);
// x.show();

// Number z1(y);   // copy const will invoke
// z1.show();

// z2=z;//  copy constructor will not invoke
// z2.show();

// Number z3=z;
// z3.show();//copy const will invoke

// }







// Destructor

#include <iostream>
using namespace std;
//Destructor never take an argument nor it return any value 

int Count = 0;
class Num
{
public:
    Num()  
    {
        Count++;
        cout << "This is time when constructor is called by object number " << Count << endl;
    }
    ~Num()
    {
        cout << "This is time when destructor is called by object number " << Count << endl;
        Count--;
    }
};

int main()
{
    cout << "Entering the main function" << endl;
    Num n1;

    {
        cout << "Entering the block" << endl;
        cout << "Creating two other objects" << endl;
        Num n2, n3;
        cout << "Leaving the block" << endl;
    }
    cout << "Back to main" << endl;
    return 0;
}
