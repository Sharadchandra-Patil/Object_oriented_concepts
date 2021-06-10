#include<iostream>
using namespace std;

namespace NDiamondProblem
{
    class A
    {
        public:
            int a;
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
    class B: public A
    {
        public:
            int b;
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
                cout<<"this->a="<<this->a<<"\t &this->a " << &this->a<<endl;
                cout<<"this->b="<<this->b<<"\t &this->b " << &this->b<<endl;
            }
            ~B()
            {
                this->b=0;
                cout<<"inside dtor of class B "<<endl;
            }


    }; // end of class B

      class C: public A
    {
        public:
            int c;
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
                cout<<"this->a="<<this->a<<"\t &this->a " << &this->a<<endl;
                cout<<"this->b="<<this->c<<"\t &this->c " << &this->c<<endl;
            }
            ~C()
            {
                this->c=0;
                cout<<"inside dtor of class C "<<endl;
            }


    }; // end of class C

 ///   class D: public B, public C
     class D: public C, public B
    {
        public:
            int d;
        
            D()
            {
                this->d=40;
                cout<<"inside paramterless ctor of class D "<<endl;
            }
            D(int a, int b, int c , int d):B(a, b), C(a, c)
            {
                this->d=d;
                cout<<"inside parameterized ctor of class D "<<endl;
            }
            void Print()
            {
                B::Print();
                C::Print();
                cout<<"inside class C"<<endl;
                // error of a is ambiguous
                //cout<<"this->a="<<this->a<<"\t &this->a " << &this->a<<endl;
                cout<<"this->B::a= (via class B) ::"<<this->B::a<<"\t [&this->B::a] " << &this->B::a<<endl;
                cout<<"this->C::a= (via class C) :: "<<this->C::a<<"\t [&this->C::a] " << &this->C::a<<endl;
                cout<<"this->b="<<this->b<<"\t &this->b " << &this->b<<endl;
                cout<<"this->c="<<this->c<<"\t &this->c " << &this->c<<endl;
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
    cout<<"obj1.a :: "<<obj1.a<<endl;

    cout<<"============================"<<endl;
    A obj2(100);
    cout<<"obj2 ::"<<endl;
    obj2.Print();
    cout<<"size of obj2 :: "<<sizeof(obj2)<<endl;
    cout<<"obj2.a :: "<<obj2.a<<endl;
    cout<<"============================"<<endl;
    */
/*
   B obj1;
    cout<<"obj1 ::"<<endl;
    obj1.Print();
    cout<<"size of obj1 :: "<<sizeof(obj1)<<endl;
    cout<<"obj1.a :: "<<obj1.a<<endl;
    cout<<"obj1.b :: "<<obj1.b<<endl;

    cout<<"============================"<<endl;
    B obj2(100,200);
    cout<<"obj2 ::"<<endl;
    obj2.Print();
    cout<<"size of obj2 :: "<<sizeof(obj2)<<endl;
    cout<<"obj2.a :: "<<obj2.a<<endl;
    cout<<"obj2.b :: "<<obj2.b<<endl;
    cout<<"============================"<<endl;
    */

    /*C obj1;
    cout<<"obj1 ::"<<endl;
    obj1.Print();
    cout<<"size of obj1 :: "<<sizeof(obj1)<<endl;
    cout<<"obj1.a :: "<<obj1.a<<endl;
    cout<<"obj1.c :: "<<obj1.c<<endl;

    cout<<"============================"<<endl;
    C obj2(100,300);
    cout<<"obj2 ::"<<endl;
    obj2.Print();
    cout<<"size of obj2 :: "<<sizeof(obj2)<<endl;
    cout<<"obj2.a :: "<<obj2.a<<endl;
    cout<<"obj2.b :: "<<obj2.c<<endl;
    cout<<"============================"<<endl;
  */
    D obj1;
    cout<<"obj1 ::"<<endl;
    obj1.Print();
    cout<<"size of obj1 :: "<<sizeof(obj1)<<endl;

    //cout<<"obj1.a :: "<<obj1.a<<endl;
    cout<<"obj1.B::a :: via class B"<<obj1.B::a<<endl;
    cout<<"obj1.C::a :: via class C"<<obj1.C::a<<endl;
    
    cout<<"obj1.b :: "<<obj1.b<<endl;
    cout<<"obj1.c :: "<<obj1.c<<endl;
    cout<<"obj1.d :: "<<obj1.d<<endl;

    cout<<"============================"<<endl;
    D obj2(100,200, 300, 400);
    cout<<"obj2 ::"<<endl;
    obj2.Print();
    cout<<"size of obj2 :: "<<sizeof(obj2)<<endl;
    //cout<<"obj2.a :: "<<obj2.a<<endl;
    cout<<"obj2.B::a :: via class B"<<obj2.B::a<<endl;
    cout<<"obj2.C::a :: via class C"<<obj2.C::a<<endl;
    cout<<"obj2.b :: "<<obj2.b<<endl;
    cout<<"obj2.c :: "<<obj2.c<<endl;
    cout<<"obj2.d :: "<<obj2.d<<endl;
   cout<<"============================"<<endl;
  
    return 0;

} 