using namespace std;
#include<iostream>

void test(); // global 

class Demo
{
    static int num;
    public:
    static void test() //static member function
    {
        cout<<" Inside Class Test() num1 :  "<<num<<endl;
    }
};
int Demo::num=50;
void test()
{
    cout<<"Inside Global test ()";
}
int main(void)
{
    //test();
    //::test(); 
    //Demo d;
    //d.test(); // test() is called upon object d 

    Demo::test();
    return 0;
}





/*

class Demo
{
    
    public:
    
    static void sum(int num1,int num2) // static member function (class functions )
    {
        int res;
        res=num1+num2;
        cout<<"Addition : "<<res<<endl;
    }
};
int main(void)
{
    //Demo dobj;
    //dobj.sum(40,20); // sum() is called upon dobj object

    // if we wish to call a function with the help of class name
    // without creating object of the class.

    //scope resolution operator is used to give a call to static member functions of class
    
    Demo::sum(30,25);


    return 0;
}

*/