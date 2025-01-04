#include<iostream>
#include<fstream>
using namespace std;

/*
The useful classes for working with files in cpp are:
1. fstreambase 
2. ifstream  --> derived from fstreambase class
3. ofstream  --> derived from fstreambase class


*/
int main()
{
  string st1="Rahul bhai";
    // ofstream out("Sample_file_handling.txt");
    // out<<st1; 
  string st2;
    ifstream in("Sample_file_handling.txt");
    getline(in,st2); 
    cout<<st2;  
}