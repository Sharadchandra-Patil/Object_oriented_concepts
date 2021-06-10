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
            friend Complex sum(Complex n1, Complex n2);
            friend Complex operator+(Complex n1, Complex n2);        
     };// end of class Complex

    Complex sum(Complex n1, Complex n2)
    {
        Complex temp;
        temp.real =n1.real+n2.real;
        temp.imag =n1.imag+n2.imag;
        return temp;
    }
    Complex operator+(Complex n1, Complex n2)
    {
        Complex temp;
        temp.real =n1.real+n2.real;
        temp.imag =n1.imag+n2.imag;
        return temp;
    }

}// end of namespace NComplex

using namespace NComplex;
int main()
{
    Complex c1(10,20), c2(30,40);
    cout<<"c1:: "<<endl;
    c1.Print();
    cout<<"c2:: "<<endl;
    c2.Print();

    Complex c3= sum(c1,c2);
    cout<<"c3::sum using frined fun "<<endl;
    c3.Print();

    Complex c4= c1+c2;
    //Complex c4= operator+(c1,c2);
    cout<<"c4::sum using operator overloading by frined fun  "<<endl;
    c4.Print();
    
   
    return 0;
}