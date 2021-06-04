using namespace std;
#include<iostream>

class Complex
{
    int real;
    int imag;
    public:
    Complex()
    {
        this->real=10;
        this->imag = 20;
    } // parameterless constructor 
    Complex(int real,int imag)
    {
        this->real=real;
        this->imag=imag;
    } // paramatrized constructor
    ~Complex(){} // destructor

    int getReal() // getter 
    {
        return this->real;
    }

    int getImag() // getter
    {
        return this->imag;
    }

    void setReal(int real) // setter 
    {
        this->real=real;
    }
     void setImag(int imag)
    {
        this->imag=imag;
    }
    void accept()
    {
        cout<<"Enter Real Value :";
        cin>>this->real;
        cout<<"Enter Imag Value :";
        cin>>this->imag;
    } // facilitator 
    void disp()
    {
        cout<<"\n Real : "<<this->real<<" Imag :"<<this->imag<<endl; 
    } // facilitator 
};

int main(void)
{
    //Complex c1; 
    //cout<<"C1 Real : "<<c1.getReal();
    //cout<<" C1 Imag :"<<c1.getImag();

    //Complex c2(70,50);
    //cout<<" C2 Imag :"<<c2.getImag();

    //Complex c3;
    //c3.accept();
    //cout<<"C3 Real : "<<c3.getReal();


    Complex c4;
    c4.accept();
    c4.disp();

    c4.setReal(75);
    c4.disp();

    return 0;
}