#include<stdio.h>
struct emp
{
    private:  // variable data member field
        int empno;
        char name[10];
        float sal;

    public: // member fun or method
    //void AcceptEmpInfo(struct emp * const this)
    //e1.AcceptEmpInfo();  this=&e1;
    void AcceptEmpInfo()
    {
        printf("Enter empno :: ");
        scanf("%d", &this->empno);
        printf("Enter empno :: ");
        scanf("%s", this->name);
        printf("Enter emp Sal :: ");
        scanf("%f", &this->sal);
        return;
    }
    //void DisplayEmpInfo(struct emp * const this)
    void DisplayEmpInfo()
    {
        printf("\n empno   name    sal \n");
        printf("%-10d%-10s%-8.3f", this->empno, this->name, this->sal);
        return;
    }
    //void SetSalary(struct emp * const this,float sal)
    void SetSalary(float sal)
    {
        this->sal=sal;
        
    }

}; // end of struct emp
//typedef struct emp EMP;
int main()
{   //cpp    c
    emp e1;//struct emp e1;
    printf("\n Ente emp info :: \n");

    
    e1.AcceptEmpInfo();//AcceptEmpInfo(&e1);
    //e1.sal=0; ///error
    printf("\n emp info is ::\n");
    
    e1.DisplayEmpInfo();//DisplayEmpInfo(&e1);

    e1.SetSalary(30000);
    e1.DisplayEmpInfo();//DisplayEmpInfo(&e1);
    return 0;
}
// have this pointer 
// all member fun except static member function

// who dont have this pointer
// global funtions
// frined functuon
// static member function
