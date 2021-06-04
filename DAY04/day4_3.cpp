using namespace std;
#include<iostream>


/*
class Test
{
    int num1;
    int num2;
    int num3;
    public:
    Test():num1(10),num2(20),num3(30){} // constructor member initializer list
    //Test()
   // {
      //  this->num1=10;
       // this->num2=20;
       // this->num3=30;
   // } 
    void disp()
    {
        cout<<" Num1 : "<<num1 <<" Num2 : "<<num2<<" Num3 : "<<num3;
    }
    ~Test()
    {
    }
   
};

int main(void)
{
    Test t;
    t.disp();
    return 0;
}
*/



/*
class Test
{
    int num1;
    int num2;
    public:
    Test(); 
    Test(int num1,int num2);
    void disp();
    ~Test() ; //destructor 
   
};

void Test::disp()
{
       cout<<"Num1 : "<<this->num1<<" Num2 : "<<this->num2;
}

Test::Test()
{
    cout<<"\n Inside Parameterless constructor ";
    this->num1=20;
    this->num2=15;
}

Test::Test(int num1,int num2)
{
   cout<<"\n Inside Paramatrized constructor ";
   this->num1=num1;
   this->num2=num2;
}

Test::~Test()
{
        cout<<"\n destructor called ";
} // destructor
    

int main(void)
{
    Test t1; //t1 object will give a call to parameterless constructor
    t1.disp();

    Test t2; // 20 15  // parameterless constructor 
    t2.disp(); 

    Test t3(80,70); // 80 70  // paramatarized constructor 
    t3.disp();
    return 0;
}



*/





/*
class Test
{
    int num1;
    int num2;
    public:
    //parameterless constructor

    // More than one constructor  
    // Constructor Overloading

    Test() // constructor with zero number of arguments (user defined default constructor )
    {
        cout<<"\n Inside Parameterless constructor ";
        this->num1=20;
        this->num2=15;
    }

    //constructor with parameters 
    // Paramaterized constructor
    Test(int num1,int num2)
    {
        cout<<"\n Inside Paramatrized constructor ";
        this->num1=num1;
        this->num2=num2;
    }

    ~Test()
    {
        cout<<"\n destructor called ";
    } // destructor
    void disp()
    {
        cout<<"Num1 : "<<this->num1<<" Num2 : "<<this->num2;
    }
};

int main(void)
{
    Test t1; //t1 object will give a call to parameterless constructor
    t1.disp();

    Test t2; // 20 15  // parameterless constructor 
    t2.disp(); 

    Test t3(80,70); // 80 70  // paramatarized constructor 
    t3.disp();
    return 0;
}

*/