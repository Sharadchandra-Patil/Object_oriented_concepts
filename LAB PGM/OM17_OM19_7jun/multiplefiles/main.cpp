#include<iostream>
using namespace std;
#include"complex.h"
using namespace NComplex;
int main()
{
    Complex c1;

    cout<<"c1::"<<endl;
    c1.Accept();
    c1.Print();

    Complex c2(111,222);
    cout<<"c2::"<<endl;
    c2.Print();

    int r, i;
    cout<<"enter value  r:: ";
    cin>>r;
    cout<<"enter value  i:: ";
    cin>>i;
    
    c2.SetReal(r);
    c2.SetImag(i);
    cout<<"c2::"<<endl;
    c2.Print();
    r=c2.GetReal();
    i= c2.GetImag();
    cout<<"c2 real ::"<<r<<endl;
    cout<<"c2 imag ::"<<i<<endl;

    // c3 newly created object c2 allready created object
    //Complex c3=c2;
    Complex c3(c2);  
    cout<<"c3::"<<endl;
    c3.Print();
    
    return 0;
}

// complex.h decl of class 
// comolex.cpp defination of class
// main.cpp member function call of complex class

//g++ -o complex.exe complex.cpp main.cpp
//makefile full time 