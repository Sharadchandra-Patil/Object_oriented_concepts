#include<iostream>
using namespace std;
#pragma pack(1)

namespace NDiamondProblem
{
    class A
    {
        private:
            int a;
        public:

            A()
            {
                this->a=10;
                cout<<"inside paramterless ctor of class A "<<endl;
            }
            A(int a)
            {
                this->a=a;
                cout<<"inside parameterized ctor of class A "<<endl;
            }
            void Print()
            {
                cout<<"inside class A"<<endl;
                cout<<"this->a="<<this->a<<"\t &this->a " << &this->a<<endl;
            }
            ~A()
            {
                this->a=0;
                cout<<"inside dtor of class A "<<endl;
            }

    };// end of class A
    class B:virtual  public A
    {
        private:
            int b;
        public:
            
            B()
            {
                this->b=20;
                cout<<"inside paramterless ctor of class B "<<endl;
            }
            B(int a, int b):A(a)
            {
                this->b=b;
                cout<<"inside parameterized ctor of class B "<<endl;
            }
            void Print()
            {
                A::Print();
                cout<<"inside class B"<<endl;
                cout<<"this->b="<<this->b<<"\t &this->b " << &this->b<<endl;
            }
            void PrintOnlyB()
            {
                cout<<"inside class B"<<endl;
                cout<<"this->b="<<this->b<<"\t &this->b " << &this->b<<endl;
            }
            ~B()
            {
                this->b=0;
                cout<<"inside dtor of class B "<<endl;
            }


    }; // end of class B

      class C: virtual public A
    {
        private:
            int c;
        public:
            C()
            {
                this->c=30;
                cout<<"inside paramterless ctor of class C "<<endl;
            }
            C(int a, int c):A(a)
            {
                this->c=c;
                cout<<"inside parameterized ctor of class C "<<endl;
            }
            void Print()
            {
                A::Print();
                cout<<"inside class C"<<endl;
                cout<<"this->b="<<this->c<<"\t &this->c " << &this->c<<endl;
            }
            void PrintOnlyC()
            {
                cout<<"inside class C"<<endl;
                cout<<"this->b="<<this->c<<"\t &this->c " << &this->c<<endl;
            }
            ~C()
            {
                this->c=0;
                cout<<"inside dtor of class C "<<endl;
            }


    }; // end of class C

 
   //  class D: public C, public B
      class D: public B, public C
    {
        private:
            int d;
        public:
            D()
            {
                this->d=40;
                cout<<"inside paramterless ctor of class D "<<endl;
            }
            D(int a, int b, int c , int d):B(a, b), C(a, c), A(a)
            {
                this->d=d;
                cout<<"inside parameterized ctor of class D "<<endl;
            }
            void Print()
            {
                A::Print();
                B::PrintOnlyB();
                C::PrintOnlyC();
                cout<<"inside class D"<<endl;
                cout<<"this->d="<<this->d<<"\t &this->d " << &this->d<<endl;
            }
            ~D()
            {
                this->d=0;
                cout<<"inside dtor of class D "<<endl;
            }

    };// end of class D
}// end of namespace
using namespace NDiamondProblem;
int main()
{
    /*A obj1;
    cout<<"obj1 ::"<<endl;
    obj1.Print();
    cout<<"size of obj1 :: "<<sizeof(obj1)<<endl;


    cout<<"============================"<<endl;
    A obj2(100);
    cout<<"obj2 ::"<<endl;
    obj2.Print();
    cout<<"size of obj2 :: "<<sizeof(obj2)<<endl;
  
    cout<<"============================"<<endl;
    */
/*
   B obj1;
    cout<<"obj1 ::"<<endl;
    obj1.Print();
    cout<<"size of obj1 :: "<<sizeof(obj1)<<endl;


    cout<<"============================"<<endl;
    B obj2(100,200);
    cout<<"obj2 ::"<<endl;
    obj2.Print();
    cout<<"size of obj2 :: "<<sizeof(obj2)<<endl;
    
    cout<<"============================"<<endl;
    */

    /*C obj1;
    cout<<"obj1 ::"<<endl;
    obj1.Print();
    cout<<"size of obj1 :: "<<sizeof(obj1)<<endl;


    cout<<"============================"<<endl;
    C obj2(100,300);
    cout<<"obj2 ::"<<endl;
    obj2.Print();
    cout<<"size of obj2 :: "<<sizeof(obj2)<<endl;
   
    cout<<"============================"<<endl;
  */
    D obj1;
    cout<<"obj1 ::"<<endl;
    obj1.Print();
    cout<<"size of obj1 :: "<<sizeof(obj1)<<endl;

    

    cout<<"============================"<<endl;
    D obj2(100,200, 300, 400);
    cout<<"obj2 ::"<<endl;
    obj2.Print();
    cout<<"size of obj2 :: "<<sizeof(obj2)<<endl;
   cout<<"============================"<<endl;
  
    return 0;

} 
/*
{
    Complex a1(10,20);
    Complex a2=a1; // Complex a2(a1);
    // newly   all ready   copy ctor


    Complex c1(10,20), c2(30, 40);
    c1=c2;
    // all ready    =operator 



}
*/