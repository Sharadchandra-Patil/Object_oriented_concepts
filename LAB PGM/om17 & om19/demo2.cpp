#include<stdio.h>
struct emp
{
    private:  // variable data member field
        int empno;
        char name[10];
        float sal;

    public: // member fun or method
    void AcceptEmpInfo()
    {
        printf("Enter empno :: ");
        scanf("%d", &empno);
        printf("Enter empno :: ");
        scanf("%s", name);
        printf("Enter emp Sal :: ");
        scanf("%f", &sal);
        return;
    }
    void DisplayEmpInfo()
    {
        printf("\n empno   name    sal \n");
        printf("%-10d%-10s%-8.3f", empno, name, sal);
        return;
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
    return 0;
}
