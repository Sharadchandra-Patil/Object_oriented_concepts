#include<stdio.h>
int no=100;
namespace N1
{
    int no=200;
    int no1=300;
    namespace N2
    {
        int no=5000;
        int no3=6000;
    }
}// end of namespace N1

int main()
{
    int no=10;
    printf("\nlocal variable no=%d [%u]", no, &no);
    printf("\nglobal variable ::no=%d [%u]", ::no, &::no);
    printf("\nvariable from N1 namespace N1::no=%d [%u]", N1::no, &N1::no);
    printf("\nvariable from N1 namespace N1::no1=%d [%u]", N1::no1, &N1::no1);

    printf("\nvariable from N1::N2 namespace N1::N2::no=%d [%u]", N1::N2::no, &N1::N2::no);
    printf("\nvariable from N1::N2 namespace N1::N2::no3=%d [%u]", N1::N2::no3, &N1::N2::no3);

    using namespace N1;
    using namespace N2;



     printf("\nvariable from N1 namespace no1=%d [%u]", no1, no1);
          printf("\nvariable from N1 namespace no1=%d [%u]", no3, no3);
    printf("\n variable no=%d [%u]", no, &no); // local

    
    
    return 0;
}