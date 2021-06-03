#include<stdio.h>
int no=100;
namespace N1
{
    int no=200;
    int no1=300;
}// end of namespace N1
int main()
{
    int no=10;
    printf("\nlocal variable no=%d [%u]", no, &no);
    printf("\nglobal variable ::no=%d [%u]", ::no, &::no);
    printf("\nvariable from N1 namespace N1::no=%d [%u]", N1::no, &N1::no);
    printf("\nvariable from N1 namespace N1::no1=%d [%u]", N1::no1, &N1::no1);

    using namespace N1;
    printf("\nvariable from N1 namespace no1=%d [%u]", no1, no1);
    printf("\n variable no=%d [%u]", no, &no); // local

    
    
    return 0;
}