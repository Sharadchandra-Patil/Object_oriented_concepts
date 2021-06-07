using namespace std;
#include<iostream>

class Complex
{
    int real;
    int imag;
    public:
    Complex()
    {
        this->real=1;
        this->imag=1;
    }
    Complex(int real,int imag)
    {
        this->real=real;
        this->imag=imag;
    }

    //Complex c3(c2); 
    // c3 : real and imag (c3 is current object : c3 ==> this*)
    //c2 : real and imag 

    // &cobj = c2 (real : 80 , imag : 40)
    Complex(Complex &cobj) // copy constructor
    {
        this->real=cobj.real;
        this->imag=cobj.imag;
    }

    void disp()
    {
        cout<<" Real : "<<this->real<<" Imag : "<<this->imag<<endl;
    }
    ~Complex()
    {
        cout<<"Inside Destructor "<<endl;
    }
};

int main(void)
{
    //Complex c1; // parameterless constructor 
    // current object c1 
   // c1.disp(); // disp() is called upon c1

    Complex c2(80,40); // paramatrized constructor 
    // Current object c2 
    c2.disp(); // disp() is called upon c2 object

    Complex c3(c2); //call to copy constructor 
    // current object : c3 
    c3.disp(); // disp() is called upon c3 

    // c3=c2; // Complex c3(c2);



    return 0;
}