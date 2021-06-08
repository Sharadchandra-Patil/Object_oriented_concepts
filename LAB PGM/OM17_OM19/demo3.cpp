#include<iostream>
using namespace std;
#include<cstdlib> // or #include<stdlib.h>
namespace NComplex
{
    class Complex
    {
        private: // data member or field
            int real;
            int imag;
        public:
            Complex()
            {
                this->real=10;
                this->imag=20;
                cout<<"inside paramterless ctor of Complex class"<<endl;
            }
            Complex(int real, int imag)
            {
                this->real=real;
                this->imag=imag;
                cout<<"inside paramterized ctor of Complex class"<<endl;
            }
            void Accept()
            {
                cout<<"Enter real :: ";
                cin>>this->real;
                cout<<"Enter imag :: ";
                cin>>this->imag;
                
            }
            void Print()
            {
                cout<<"this->real::"<<this->real<<endl;
                cout<<"this->imag::"<<this->imag<<endl;
            }

            //setter method mutator
            void SetReal(int real)
            {
                this->real=real;
            }
            void SetImag(int imag)
            {
                this->imag=imag;                
            }
            // inspectors getter method
            int GetReal()
            {
                return this->real;
            }
             int GetImag()
            {
                return this->imag;
            }
           
            ~Complex()
            {
                cout<<"========"<<endl;
                this->Print();
                cout<<"========"<<endl;
                this->real=0;
                this->imag=0;
                cout<<"inside dtor of Complex class"<<endl;
            }
            

    };// end of class Complex
}// end of namespace NComplex

using namespace NComplex;
int main()
{
    Complex *ptr= new Complex;
    cout<<"ptr"<<endl;
    ptr->Print();
    delete ptr;
    ptr=NULL;
    cout<<"=================="<<endl;
    Complex *ptr1= (Complex*)malloc(sizeof(Complex)*1);
    cout<<"ptr1"<<endl;
    ptr1->Print();
    free(ptr);
    ptr=NULL;
    cout<<"=================="<<endl;
    return 0;
}