// program to demonstraate datatype in C++
/*
Author : Akshita
Organization : Sunbeam 
*/

//file inclusion area 

#include<iostream>

int main(void)
{
    wchar_t w=L'A'; // variable w of type wchar_t
    printf("%d ",w);
    printf("\n size : %d size : %d",sizeof(w),sizeof(wchar_t));

    return 0;
}



/*
int main(void)
{
    bool b1=true; //b1 is a variable initialized by true value
    bool b2=false;//b2 is a variable initialized by false value
    printf("b1 : %d",b1);
    printf("\n B2 : %d",b2);
    printf("\n size : %d size : %d",sizeof(bool),sizeof(b1));
    return 0;
}
*/