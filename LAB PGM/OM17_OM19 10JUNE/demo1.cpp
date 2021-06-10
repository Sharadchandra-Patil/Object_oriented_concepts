#include<iostream>
using namespace std;
namespace FunctionOverriding
{   // concreate class -- complex , emp, circle
    // abstract class  --- shaple , fruit, flower
    class Shape
    {
        protected:
            double area;
            double perimeter;
        public:
            Shape()
            {
                this->area=0.0;
                this->perimeter=0.0;
                cout<<"inside paramterless ctor of shape class"<<endl;

            }
            // pure virtual function
            //virtual return_type funname()=0;
            virtual void AcceptInput()=0;
            virtual double CalulateArea()
            {

            }
            virtual double CalulatePerimeter()
            {
                
            }
            virtual void PrintOutput()
            {
                cout<<"inside print of shape class"<<endl;
            }
            

            virtual ~Shape()
            {
                this->area=0.0;
                this->perimeter=0.0;
                cout<<"inside dtor of shape class"<<endl;
            }
    }; // end of shape class

    class Circle : public Shape
    {
        private:
            double radius;
        public:
            Circle()
            {
                this->radius=0.0;
                cout<<"inside  paramterless ctor of circle class"<<endl;
            }
            
            void AcceptInput()
            {
                cout<<"Enter radius :: ";
                cin>>this->radius;
            }
            double CalulateArea()
            {
                this->area= 3.142*this->radius*this->radius;
            }
            double CalulatePerimeter()
            {
                this->perimeter= 2*3.142*this->radius;
            }
            void PrintOutput()
            {
                cout<<"this->radius::"<<this->radius<<endl;
                cout<<"this->area::"<<this->area<<endl;
                cout<<"this->perimeter::"<<this->perimeter<<endl;
            }
            

            ~Circle()
            {
                this->radius=0.0;
                cout<<"inside  dtor of circle class"<<endl;
            }

    }; // end of Circle class


    class Rectangle : public Shape
    {
        private:
            double l;
            double b;
        public:
            Rectangle()
            {
                this->l=0.0;
                this->b=0.0;
                cout<<"inside  paramterless ctor of Rectangle class"<<endl;
            }
            void AcceptInput()
            {
                cout<<"Enter l :: ";
                cin>>this->l;
                cout<<"Enter b :: ";
                cin>>this->b;
            }
            double CalulateArea()
            {
                this->area= this->l*this->b;
            }
            double CalulatePerimeter()
            {
                this->perimeter= 2*(this->l +this->b);
            }
            void PrintOutput()
            {
                cout<<"this->l::"<<this->l<<endl;
                cout<<"this->b::"<<this->b<<endl;
                cout<<"this->area::"<<this->area<<endl;
                cout<<"this->perimeter::"<<this->perimeter<<endl;
            }
            

            ~Rectangle()
            {
                this->l=0.0;
                this->b=0.0;
                cout<<"inside  dtor of Rectangle class"<<endl;
            }

    }; // end of Circle class
}
using namespace   FunctionOverriding;
int MenuChoice()
{
    int choice;
    cout<<"1. circle \n 2. Rectangle \n 0. Exit "<<endl;
    cout<<"Enter your choice:: ";
    cin>>choice;

    return choice;
}
int main()
{
    //Shape obj; // error we can not create object of abstarct class
    Shape *ptshape=NULL;
    int choice;

    do
    {
        choice= MenuChoice();
        switch (choice)
        {
            case 1: // circle
                    ptshape=new Circle(); // upcasting
                    break;
            case 2: // rectangle
                    ptshape=new Rectangle();// upcasting
                    break;
    
            default:        cout<<"invalid choice"<<endl;
                break;
        }
        ptshape->AcceptInput();
        ptshape->CalulateArea();
        ptshape->CalulatePerimeter();
        ptshape->PrintOutput();

        delete ptshape;
        ptshape=NULL;

        cout<<"Enter 1 to continue or o to exit "<<endl;
        cin>>choice;
    } while(choice!=0);

    return 0;
}