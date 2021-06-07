using namespace std;
#include<iostream>
#include "emp.h"

Employee::Employee()
{
    this->id=0;
    this->salary=0;
}

Employee::Employee(int id,int salary)
{
    this->id=id;
    this->salary=salary;
}
void Employee::accept()
{
    cout<<"Enter ID :";
    cin>>this->id;
    cout<<"Enter Saalry :";
    cin>>this->salary;
}
void Employee::disp()
{
    cout<<"\n ID : "<<this->id<<" Salary : "<<this->salary;
}



