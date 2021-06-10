using namespace std;
#include<iostream>
// show() signature / prototype is same in different scope 
// function name is same, function arguments are also same
// they belong to different scope 
// FUNCTION OVERRIDING (POLYMORPHISIM)

class Base
{
    public:
    void show()
    {
        cout<<"Inside Base class Show function "<<endl;
    }
};

class Derived:public Base
{
    public:
    void show()
    {
       // Scope resolution is used to call to overridden function of base class 
        //from derived class
         Base :: show(); 
        cout<<" Inside Derived class show function "<<endl;
        
    }
};

int main(void)
{
    Derived dobj;
    dobj.show();
    return 0;
}