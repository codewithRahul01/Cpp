// #include<iostream>
// using namespace std;

// int main(){
//   int a=45;
//   int* ptr = &a;
//   cout<<"The address of a is "<<ptr<<endl;
//   cout<<"The value of a is "<<*(ptr)<<endl;

//   //   (new) and (delete)--> operator
// //new ---> used to set value at any address
// // delete ---> used to delete any allocated  memory
//   int *p= new int(40);
//   cout<<"The value at address p is "<<*p <<endl;

//   int *ar = new int [3];
//   ar[0]=10;
//   ar[1]=20;
//   ar[2]=30;

//   // delete ar;
//   delete[] ar;  // used to delete the block of allocated memory
//   cout<<"The value of ar[0] is "<<ar[0]<<endl;
//   cout<<"The value of ar[1] is "<<ar[1]<<endl;
//   cout<<"The value of ar[2] is "<<ar[2]<<endl;

//   return 0;
// }

#include <iostream>
using namespace std;

class Complex
{
  int real;
  float imaginary;

public:
  void getData()
  {
    cout << "The value of real part of complex number is: " << real << endl;
    cout << "The value of imaginary part of complex number is: " << imaginary << endl;
  }
  void setData(int a, float b)
  {
    real = a;
    imaginary = b;
  }
};

int main()
{

  // Complex c1;
  // Complex* ptr = &c1;
  int size=3;
  Complex *ptr = new Complex[size];
  Complex *ptrTem = ptr;
  int p;
  float q;
  // (*ptr).setData(10,20);  is exactly same as
  // ptr->setData(10,20);  //  '->' arrow operator implies the value toward which pointer is pointing

  // (*ptr).getData(); is as good as
  // ptr->getData();

  for (int i = 0; i < size; i++)
  {
    cout << "Enter the Real and Imaginary part of number: " << i + 1 << endl;
    cin >> p >> q;
    ptr->setData(p, q);
    *ptr++;
  }
  for (int i = 0; i < size; i++)
  {
    cout << "Number Id: " << i + 1 << endl;
    ptrTem->getData();
    ptrTem++;
  }

  return 0;
}