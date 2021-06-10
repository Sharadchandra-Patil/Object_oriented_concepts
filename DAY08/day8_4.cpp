using namespace std;
#include<iostream>


// when we use virtual keyword with function
// virtual function declaration must be done in base class Compulsory 
// virtual functions are designed to be called using base class pointer

//LATE BINDING CONCEPT

class Base
{
    public:
    virtual void show()
    {
        cout<<"Inside show function of base class"<<endl;
    }
};
class Derived : public Base
{
    public:
    void show()
    {
        Base :: show();
        cout<<"Inside show function of derived class"<<endl;
    }
};

int main(void)
{
    Base *ptr; // base class pointer 
    Derived dobj; // created object of derived class
    ptr=&dobj;  // pointer is holding address of derived class object 
    ptr->show(); // call to derived class
    return 0;
}





/*
class Base
{
    public:
    void show()
    {
        cout<<"Inside show function of base class"<<endl;
    }
};
class Derived : public Base
{
    public:
    void show()
    {
        Base :: show();
        cout<<"Inside show function of derived class"<<endl;
    }
};

int main(void)
{
    Base *ptr; // base class pointer 
    Derived dobj; // created object of derived class
    ptr=&dobj;  // pointer is holding address of derived class object 
    ptr->show(); // call to base class Always 
    return 0;
}
//If we give a call to overridden function , using base class pointer 
// then always base class function gets called 
// EARLY BINDING CONCEPT

*/