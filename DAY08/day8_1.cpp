using namespace std;
#include<iostream>
#include<string>

class Person
{
    private:
    string name;
    int age;
    public:
    Person() // parameterless constructor
    {   
        cout<<"Inside Person Parameterless constructor "<<endl;
        this->name="ABC";
        this->age=20;
    }
    Person(string name,int age) // paramatrized constructor
    {
        cout<<"Inside Person paramatrized constructor "<<endl;
        this->name=name;
        this->age=age;
    }
    ~Person() // destructor 
    {
        cout<<"Inside Person class destructor "<<endl;
    }
    void print_person_data()
    {
        cout<<" Name :"<<this->name<<" Age : "<<this->age<<endl;
    }
}; //end of Person

//class Derived_class_name : Mode Base_class Name{}
class Employee : public Person 
{
    private:
    int id;
    int salary;
    public:
    // PARAMETERLESS CONSTRUCTOR OF DERIVED CLASS
    //GIVES A CALL TO PARAMETERLESS CONSTRUCTOR OF BASE CLASS AUTOMATICALLY
    Employee() //parameterless constructor
    {
        cout<<"Inside Employee Parameterless constructor "<<endl;
        this->id=1;
        this->salary=50000;
    }
    //call to paramatrized constructor of super class (UPCASTING)
    // is done by writing it in constructor member initiaalizer list 
    Employee(int id,int salary,string name,int age) :Person(name,age)
    {
        cout<<" Inside Employee Paramatrized constuctor "<<endl;
        this->id=id;
        this->salary=salary;

    }
    void print_emp_data()
    {
        cout<<" ID : "<<this->id<<" Salary :"<<this->salary<<endl;
        print_person_data(); //call to public member function of class inside derived class 
    }
    ~Employee() // destructor 
    {
        cout<<"Inside Employee class destructor "<<endl;
    }
};  //end of class Employee



int main(void)
{
    //Employee e1; // created object of derived class 
    // call to parameterless constructor of Base class and then
    //to derived class 
    
    //e1.print_emp_data();

    Employee e2(1,60000,"Akshita",33);
    e2.print_emp_data();

    
    return 0;
}

//NOTE: destructor calling sequence is exactly opposite to constructor calling sequence

// Constructor ==> Person Constructro : Employee
//Destructor ==> Employee Desctructor : Person
// Child class object gets destroyed first then parent class object gets destroyed 




/*
Person 
{
    void accept_person_data(){....}
}
Employee
{
    void accpt_emp_data()
    {
        ---
        accept_person_data();
    }
}
*/


/* Multiple  : more than one base class

class A
{..};
class B
{....};
class C : public A, public B
{...}
*/