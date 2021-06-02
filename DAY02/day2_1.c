#include<stdio.h>

// in case of C structure we can not define functions inside structure body

struct Department
{
    int id;
    char name[20];
    void accept() // ERROR : we can not declare or define functions within structure body
    {
        printf("Enter id :");
        scanf("%d",&id);
    }
};
int main(void)
{
    struct Department d;
    //id=1; // error: 'id' undeclared
    d.id=1;//ALLOWED
}



/*
typedef struct Employee
{
    int id;  // data members / elements 
    int salary;
}emp;

// If we wish to use structure and function in c programming
//then we use global functions only

struct Employee accept(); //function returning a struture 
void disp(struct Employee e); // function can take structure as an argument

int main(void)
{
    struct Employee e1,e2;
    e1=accept();
    disp(e1);
    e2=accept();
    disp(e2);
    return 0;
}

struct Employee accept()
{
    struct Employee e; //e is a variable of type structure
    printf("Enter ID : ");
    scanf("%d",&e.id);
    printf("\n Enter Salary :");
    scanf("%d",&e.salary);
    return e;

}
void disp(struct Employee e)
{
    printf("ID : %d Salary : %d",e.id,e.salary);
}

*/