using namespace std;
#include<iostream>

class Complex
{
   private:
    int real; // data member of class Complex
    int imag; // data member of class Complex
    public:
    void accept();
    void disp();
};

// if we wish to define member functions of class, outside its scope
// then we use SCOPE RESOLUTION OPERATOR 

void Complex::accept()
{
        cout<<"Enter Real number :";
        cin>>real;
        cout<<"Enter Imaginary value :";
        cin>>imag;
}

void Complex::disp()
{ 
    cout<<"\n Real Value : "<<real<<" Imag Value : "<<imag;

}

int main(void)
{
    Complex c1;
    c1.accept();
    c1.disp();
    return 0;
}