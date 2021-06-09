using namespace std;
#include<iostream>

// friend function is used to Access the private data members of the class 
class B; // FORWARD DECLARATION

class A
{
    private: 
        int num1;
    public:
        A()
        {
            this->num1=40;
        }
        A(int num1)
        {
            this->num1=num1;
        }
        friend void sum(A aobj,B bobj); // friend function declaration
        void dispA()
        {
            cout<<" Num1 :"<<num1<<endl;
        }
};

class B
{
    private: 
        int num2;
    public:
        B()
        {
            this->num2=20;
        }
        B(int num2)
        {
            this->num2=num2;
        }
        friend void sum(A aobj,B bobj); // friend function declaration
        void dispB()
        {
            cout<<" Num2 :"<<num2<<endl;
        }
};

//definition of friend function must be done in global area without using ::

void sum(A aobj,B bobj)
{
    int res= aobj.num1+bobj.num2;
    cout<<" Result : "<<res;
}

int main(void)
{
    A a1; // 40 
    //a1.num1=50; // NOT ALLOWED 
    B b1; // 20 
    //b1.num2=50; // NOT ALLOWED 
    sum(a1,b1); //call to friend function
    a1.dispA(); //call to member function
    b1.dispB(); // call to member function

    return 0;
}