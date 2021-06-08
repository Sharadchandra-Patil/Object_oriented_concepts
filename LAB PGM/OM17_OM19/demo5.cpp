#include<iostream>
using namespace std;
 namespace NStaticDemo
 {   
    class StaticDemo
    {
        private:
            int id;
            int a;
            int b;
            static int counter;
        public:
            StaticDemo()
            {
                StaticDemo:counter++;
                //StaticDemo:counter= StaticDemo::counter+1;
                this->id= StaticDemo::counter;
                this->a=10;
                this->b=20;
            }

            StaticDemo(int a, int b)
            {
                StaticDemo:counter++;
                //StaticDemo:counter= StaticDemo::counter+1;
                this->id= StaticDemo::counter;
                this->a=a;
                this->b=b;
            }
            void Print()
            {
                cout<<"this->id :: "<< this->id<<"["<< &this->id<<"]"<<endl;
                cout<<"this->a :: "<< this->a<<"["<< &this->a<<"]"<<endl;
                cout<<"this->b :: "<< this->b<<"["<< &this->b<<"]"<<endl;
                cout<<"counter :: "<< StaticDemo::counter<<"["<< &StaticDemo::counter<<"]"<<endl;    
            }
            // static member fun can access only static data member
            // static member fun can not access non static data member 
            static void SetCounter(int counter)
            {

                StaticDemo::counter=counter;
                //id=counter;//error
            }
    
            ~StaticDemo()
            {

                
                this->id= 0;
                this->a=0;
                this->b=0;

            }

    };// gloabal defination static data member
    int StaticDemo::counter=1000;
 }
 
 using namespace NStaticDemo;
int main()
{
    StaticDemo::SetCounter(100);
   StaticDemo d1;
   cout<<"d1 ::"<<endl;
   d1.Print();
   cout<<"sizeof (d1)="<<sizeof(d1)<<endl;
  
   StaticDemo d2;
   cout<<"d2 ::"<<endl;
   d2.Print();
   cout<<"sizeof (d2)="<<sizeof(d2)<<endl;
   
   return 0;
}