#include<iostream>
using namespace std;
#include"complex.h"
using namespace NComplex;
            Complex:: Complex()
            {
                this->real=10;
                this->imag=20;
                cout<<"inside paramterless ctor of Complex class"<<endl;
            }
            Complex:: Complex(const Complex& other)
            {
                this->real=other.real;
                this->imag=other.imag;
                cout<<"inside copy ctor of comple class"<<endl;
            }
            Complex::Complex(int real, int imag)
            {
                this->real=real;
                this->imag=imag;
                cout<<"inside paramterized ctor of Complex class"<<endl;
            }
            void Complex::Accept()
            {
                cout<<"Enter real :: ";
                cin>>this->real;
                cout<<"Enter imag :: ";
                cin>>this->imag;
                
            }
            void Complex::Print()
            {
                cout<<"this->real::"<<this->real<<endl;
                cout<<"this->imag::"<<this->imag<<endl;
            }

            //setter method mutator
            void Complex::SetReal(int real)
            {
                this->real=real;
            }
            void Complex::SetImag(int imag)
            {
                this->imag=imag;                
            }
            // inspectors getter method
            int Complex::GetReal()
            {
                return this->real;
            }
             int Complex::GetImag()
            {
                return this->imag;
            }
           
            Complex::~Complex()
            {
                cout<<"========"<<endl;
                this->Print();
                cout<<"========"<<endl;
                this->real=0;
                this->imag=0;
                cout<<"inside dtor of Complex class"<<endl;
            }