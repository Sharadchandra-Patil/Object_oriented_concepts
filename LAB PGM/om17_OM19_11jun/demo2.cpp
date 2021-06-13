#include<iostream>
using namespace std;
namespace NDownCasting
{
    class Base
    {
        private:
            int a;
            int b;
        public:
            Base()
            {
                this->a=10;
                this->b=20;
                cout<<"inside parameter less ctor of base class"<<endl;
            }
            Base(int a, int b)
            {
                this->a=a;
                this->b=b;
                cout<<"inside parameterized ctor of base class"<<endl;
            }
            virtual void Print()
            {
                cout<<"inside class Base"<<endl;
                cout<<"this->a :: "<<this->a<<endl;
                cout<<"this->b :: "<<this->b<<endl;

            }

            virtual ~Base()
            {
                this->a=0;
                this->b=0;
                cout<<"inside dtor of base class"<<endl;
            }
    };
    class Derived:public Base
    {
        private:
            int c;
        public:
            Derived()
            {
                this->c=30;
                cout<<"inside parameterless  ctor of derived class"<<endl;                
            }
            Derived(int a, int b, int c):Base(a,b)
            {
                this->c=c;
                cout<<"inside parameterized  ctor of derived class"<<endl;                
            }
            void Print()
            {
                
                Base::Print();
                cout<<"inside class Derived"<<endl;
                cout<<"this->c :: "<<this->c<<endl;
            }
            ~Derived()
            {
                this->c=0;
                cout<<"inside dtor of derived class"<<endl;                
            }
            

    };
}
using namespace NDownCasting;
int main()
{
    //Derived *ptrderived=new Base();// error

    Derived *ptrderived1=NULL;
    Base obj1;
    //ptrderived1=&obj1;// error

    return 0;
}