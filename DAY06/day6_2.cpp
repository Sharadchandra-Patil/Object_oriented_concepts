using namespace std;
#include<iostream>

// static : data section 

// 1. static data member 
// 2. static member function

class Test
{
    int num;
    static int s_var; //data member declared as static ( class variables)
    public:
    Test() // parameterless constructor 
    {
        this->num=10;
    }
    Test(int num) // paramatrized constructor 
    {
        this->num=num;
    }
    void change()
    {
        s_var+=200;
    }
    void disp()
    {
        cout<<" Num : "<<num<< " S_VAR : "<<s_var<<endl;
    }
};
//scope resolution operator 
// it is used to initialize static field of class outside the class
int Test::s_var=500;



int main(void)
{
    Test t1;
    t1.disp();
    Test t2(50);
    t2.disp(); 
    cout<<"\n calling change function..";
    t2.change();
    t2.disp();
    t1.disp();
    return 0; 
}
