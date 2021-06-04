using namespace std;
#include<iostream>
class Complex
{
    private:
    int real;
    int imag;
    public:
    Complex() // constructor (Special Member function)
    {
       cout<<"\n Inside Constructor : "<<this;
        this->real=0; // this is holding cobj now 
        this->imag=0;
    }
    //destructor 
    //special member : automatically it gets called when object goes out of scope
    ~Complex()
    {
        cout<<"\n Desctructor Called : "<<this;
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
    Complex c1;
    c1.disp();
    Complex c2;
    c2.disp();
    return 0;
}


// Destructor calling sequence is exactly opposite to constructor calling sequence