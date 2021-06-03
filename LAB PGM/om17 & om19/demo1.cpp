#include<stdio.h>
struct emp
{
    int empno;
    char name[10];
    float sal;
}; // end of struct emp
void AcceptEmpInfo(struct emp *e);
void DisplayEmpInfo(const struct emp *e);

int main()
{
    struct emp e1;
    printf("\n Ente emp info :: \n");
    AcceptEmpInfo(&e1);

    printf("\n emp info is ::\n");
    DisplayEmpInfo(&e1);
    return 0;
}
void AcceptEmpInfo(struct emp *e)
{
    printf("Enter empno :: ");
    //scanf("%d", &e->empno);
    scanf("%d", &e->empno);
    printf("Enter empname :: ");
    scanf("%s", e->name);
    printf("Enter emp Sal :: ");
    scanf("%f", &e->sal);
    return;   
}
void DisplayEmpInfo(const struct emp *e)
{   
    printf("\n empno   name    sal \n");
    printf("%-10d%-10s%-8.3f",e->empno, e->name, e->sal);
    printf("\n%-10d%-10s%-8.3f",(*e).empno, (*e).name, (*e).sal);
    return ;
}

