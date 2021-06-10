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
               // cout<<"inside paramterless ctor of Complex class"<<endl;
            }
            Complex(int real, int imag)
            {
                this->real=real;
                this->imag=imag;
                //cout<<"inside paramterized ctor of Complex class"<<endl;
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

            Complex minus(Complex c1)
            {
                Complex temp;
                temp.real= this->real- c1.real;
                temp.imag= this->imag- c1.imag;
                return temp;
            }
            Complex operator-(Complex c1)
            {
                Complex temp;
                temp.real= this->real- c1.real;
                temp.imag= this->imag- c1.imag;
                return temp;
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
                //cout<<"========"<<endl;
                //this->Print();
                //cout<<"========"<<endl;
                this->real=0;
                this->imag=0;
     
            }
     };// end of class Complex

 

}// end of namespace NComplex

using namespace NComplex;
int main()
{
    Complex c1(30,40), c2(10,20);
    cout<<"c1:: "<<endl;
    c1.Print();
    cout<<"c2:: "<<endl;
    c2.Print();

    Complex c3= c1.minus(c2);
    cout<<"c3::minus using member fun "<<endl;
    c3.Print();

    Complex c4= c1-c2;
    //Complex c4= c1.operator-(c2);
    cout<<"c4::minus using operator overloading by member fun  "<<endl;
    c4.Print();
    
   
    return 0;
}