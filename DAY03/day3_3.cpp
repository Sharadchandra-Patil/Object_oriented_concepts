using namespace std;
#include<iostream>


// DATA HIDING (private )

// IF WE WISH TO ACCESS THE PRIVATE DATA MEMBERS OF CLASS
// THEN WE CAN ACCESS THEM ONLY THROUGH MEMBER FUNCTIONS

//only member functions can access the private data members of the class


class Complex
{
   private:
    int real; // data member of class Complex
    int imag; // data member of class Complex
    public:
    void accept() // member function of class Complex
    {
        cout<<"Enter Real number :";
        cin>>real;
        cout<<"Enter Imaginary value :";
        cin>>imag;
    }

    void disp() //member function of class Complex
    {
        cout<<"\n Real Value : "<<real<<" Imag Value : "<<imag;
    }

};


int main(void)
{
    Complex c1;
    //c1.real=50; //int Complex::real' is private within this context
    //c1.imag=40; //int Complex::imag' is private within this context
    c1.accept();
    c1.disp();
    return 0;
}




//normally we create data members in private section (to achive data hiding)
// normally we create member functions in public section, so that
//we can access the member functions outside the class