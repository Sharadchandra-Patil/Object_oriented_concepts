using namespace std;
#include<iostream>

//Member functions 
//1. Constructor 
class Complex
{
    private:
    int real;
    int imag;
    public:
    Complex() // constructor (Special Member function)
    {
        cout<<"\n Inside Constructor"<<this;
        this->real=20; // this is holding cobj now 
        this->imag=10;
    }
    void accept()
    {
        cout<<"\n Enter Real value :";
        cin>>this->real;
        cout<<"\n Enter Imag value :";
        cin>>this->imag;
    }
    void disp() //member function 
    {
        cout<<"\n Real : "<<real<<" Imag : "<<imag;
    }
};
int main(void)
{
    Complex cobj1;
    // CONSTRUCTOR GETS CALLED AUTOMATICALLY WHENEVER WE CREATE OBJECT (Implecit Call)
    //AND IT INITIALIZE THE DATA MEMBERS 
    cobj1.disp(); //disp() is called upon object cobj 
    // Normal member functions are called with the help of object name 
    // Explicit Calling
   // cobj1.accept();
    //cobj1.disp();

    Complex c2; 
    c2.disp();
    return 0;
}


