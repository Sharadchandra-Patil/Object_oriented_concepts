using namespace std;
#include<iostream>
 







/*

//Scope resolution operator : is used for accessing the global data 

int num=100; // global variable

namespace n1
{
    int num=500; // namespace variable
}
int main(void)
{
    int num=400;  //local variable
    cout<<"local variable : "<<num;
    cout<<"\n namespace variable :"<<n1::num;
    cout<<"\n global variable : "<<::num;
    return 0;
}
*/





 /*
 //nested namespace
namespace na
{
    int a=10;
    namespace nb // defining a namespace within a namespace
    {
        int b=20;
        int a=500;
    }
}

namespace nc
{
    int c=30;
}
int main(void)
{
    cout<<" c variable from nc : "<<nc::c;
    cout<<"\n  a variable from na : "<<na::a;
    cout<<"\n b variable from nb : "<<na::nb::b;
    cout<<"\n a variable from nb : "<<na::nb::a;
    return 0;
}
*/



/*
// if we have same namespace name
// it is compulsory that both the namespaces must have different 
//set of variables

namespace na
{
    int a=10;
}
namespace nb
{
    int b=20;
}
namespace na
{
    int d=40;
}
int main(void)
{
    cout<<na::a; //error: redefinition of 'int na::a'
    return 0;
}
*/



/*
namespace n1
{
    int a=10;
    int b=20;
    int c=30;
}
namespace n2
{
    int a=40;
    int b=50;
}
int main(void)
{
    cout<<"A from n1 :"<<n1::a;
    cout<<"\n B from n1 :"<<n1::b;
    cout<<"\n C from n1 :"<<n1::c;
    cout<<"\n b from n2 :"<<n2::b;
    n1::a=500;
    cout<<"\n A from n1 :"<<n1::a;
    return 0;
}

*/

/*

int main(void)
{
    namespace na //error: 'namespace' definition is not allowed here
    {
        int a=10;
    }
}

*/

/*
// define a namespace
//namespace name_of_namespace
//{
  //  variable list
//}


namespace n1
{
    int num1=40;
    int num2=30;
}
namespace n2
{
    int num1=50;
}

//Scope resolution operator : to access the namespace variables
// namespace_name :: variablename 
int main(void)
{
    cout<<"Access the num1 from n1 = "<<n1::num1;
    cout<<"\n Access the num2 from n1 = "<<n1::num2;
    cout<<"\n Access the num1 from n2 = "<<n2::num1;
    return 0;
}

*/