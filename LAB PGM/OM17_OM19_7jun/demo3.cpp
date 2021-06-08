#include<iostream>
using namespace std;
namespace NConstDemo
{
    class ConstDemo
    {
        private:
            int a;
            mutable int b;
            const int c;
            const int d;
        public:
        ConstDemo():a(10), b(20),c(30), d(40)
        {
            //this->a=10; allow
            //this->b=20;  allow
           // this->c=30; //error
           // this->d=40; //error
        }
        ConstDemo(int a, int b, int c, int d):a(a), b(b),c(c), d(d)
        {
            //this->a=a; allow
            //this->b=b;  allow
           // this->c=c; //error
           // this->d=d; //error
        }
        //
        //void Print(ConstDemo * const this)
        void Print()
        {
            this->a=1000; // allowed
            this->b=1000; 
            //this->c=1000; // error as a and b are const data member
            //this->d=1000;
            cout<<"this->a :: "<<this->a<<endl;
            cout<<"this->b:: "<<this->b<<endl;
            cout<<"this->c :: "<<this->c<<endl;
            cout<<"this->d :: "<<this->d<<endl;
        }
//void Display(const ConstDemo * const this)
        void Display()const
        {
            //this->a=1000; // error as display is const member fun
            this->b=1000;  // allowed as data member is mutable
            //this->c=1000; // error as a and b are const data member
            //this->d=1000;
            cout<<"this->a :: "<<this->a<<endl;
            cout<<"this->b:: "<<this->b<<endl;
            cout<<"this->c :: "<<this->c<<endl;
            cout<<"this->d :: "<<this->d<<endl;
        }
        ~ConstDemo()
        {
            this->a=0; //allow
            this->b=0;  //allow
           // this->c=30; //error
        }
    };
}
using namespace NConstDemo;
int main()
{
    ConstDemo c1;
    // non const obj can call both const and non const memer fun
    cout<<"c1:: Display()";
    c1.Display();

    cout<<"c1:: Print()";
    c1.Print();
    cout<<"size of c1="<<sizeof(c1);    
   // const obj can call only const member fun
  // const obj can not call only non const member fun
    
   const ConstDemo c2;
   // cout<<"c2:: Print()";
   // c2.Print(); error
    cout<<"c2:: Display()";
    c2.Display();

    
    return 0;
}
