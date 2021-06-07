#include<iostream>
using namespace std;
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

    return 0;
}