using namespace std;
#include<iostream>

class Demo
{
    int a; // non constant
    int b; // non constant 
    const int c;
    mutable int m;
    public:
    Demo():c(400)
    {
        this->a=10;
        this->b=20;
        this->m=30;
    }
    void disp() const  // constant member function
    {
       
        cout<<" \n A : "<<a<<" B : "<<b << "C : "<<c <<" M : "<<m;
        //a++; // Not allowed 
        //b++; // Not allowed 
        //c++ ; // Not Allowed 
        m++; //allowed
         cout<<" \n A : "<<a<<" B : "<<b << "C : "<<c <<" M : "<<m;
       
    }
};

int main(void)
{
    Demo dobj;
    dobj.disp();
    return 0;
}
/*
class Demo
{
    int a; // non constant
    int b; // non constant 
    const int c; //constant data member 
    public:
    Demo():c(40)
    {
        this->a=10;
        this->b=20;
    }
    void disp() const  // constant member function
    {
        //we can not modify the state of data members within constant member function 
        cout<<" \n A : "<<a<<" B : "<<b <<" C : "<<c;
        //c++; // NO Read Only 
        //a++;
        //b++;
        //cout<<" \n A : "<<a<<" B : "<<b;
    }
};

int main(void)
{
    Demo dobj;
    dobj.disp();
    return 0;
}
*/

/*
class Demo
{
    int a; // non constant
    int b; // non constant 
    public:
    Demo()
    {
        this->a=10;
        this->b=20;
    }
    void disp() const  // constant member function
    {
        //we can not modify the state of data members within constant member function 
        cout<<" \n A : "<<a<<" B : "<<b;
        //a++;
        //b++;
        //cout<<" \n A : "<<a<<" B : "<<b;
    }
};

int main(void)
{
    Demo dobj;
    dobj.disp();
    return 0;
}
*/


/*
class Demo
{
    int num1;
    const int c; // c is data member declared as constant
    public:
    //if we wish to initialize constant data member
    //we need to initialize them only with constructor member initilizer list 
    //constructor member initializer list
    Demo():num1(10),c(20){}

    
   // Demo():c(20)  // partial constructor initializer list
   // {
   //     this->num1=10;
   // }
    

    

    //Demo()
    //{
      //  this->num1=10;
        //we can not initialize constant data member inside constructor body
        //this->c=20; // error: assignment of read-only member
    //}
    

   void disp()
   {
       cout<<"Num 1 :"<<num1<<" Value of C :"<<c;
   }
};

int main(void)
{
    Demo dobj;
    dobj.disp();
    return 0;
}

*/


/*

//constant Variable
int main(void)
{
    const int c=10; //read only variable
    //const float PI; // NOT ALLOWED in C++ (only declaration is not allowed )
    //PI=3.14;
    const float PI=3.14; // ALLOWED
    //declaration and definition must be done in same line
    cout<<c<<endl;
    //c++;
    // cout<<c; // error: increment of read-only variable 'c'
    return 0;
}

*/