using namespace std;
#include<iostream>


//in c++ we can define functions inside structure body


// binidng the data + code toghther in one single scope
// Encapsulation

struct Employee  
{
    int id;   // data member / elements /field
    int salary;// data member / elements / fields
    void accept()  // member function
    {   
        cout<<"Enter ID :";
        cin>>id;
        cout<<" Enter Salary :";
        cin>>salary;
    }
    void disp() //member function 
    {
        cout<<"ID : "<<id<<" Salary :"<<salary;
    }

};



int main(void)
{
    struct Employee e1; // e1 is a variable of type structure
    // to access the data members and member functions of structure Employee 
    //accept(); //error: 'accept' was not declared in this scope;
    //disp(); //error: 'disp' was not declared in this scope

    e1.accept();
    e1.disp();

    struct Employee e2;
    e2.id=20;
    e2.salary=70000;
    e2.disp();

  
    return 0;
}