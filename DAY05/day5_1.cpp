using namespace std;
#include<iostream>
#include "emp.h" //emp.h header file is present inside current working directory

int main(void)
{
    Employee e1;
    e1.disp();

    Employee e2(1,50000);
    e2.disp();

    Employee e3;
    e3.accept();
    e3.disp();
    
    return 0;
}


/*
 g++ -c empImpl.cpp
 g++ -c day5_1.cpp
 g++ empImpl.o day5_1.o
 ./a.exe

 */


