using namespace std;
#include<iostream>
class A
{
    public:
    int a;
};
class B : public A
{
    public:
    int b;
};
class C : public A
{
    public:
    int c;
};
class D:public B,public C
{
    public:
    int d;
};
int main(void)
{
    D dobj;
    dobj.d=10;
    dobj.c=20;
    dobj.b=30;
    cout<<"dobj.d :"<<dobj.d<<endl;
     cout<<"dobj.c :"<<dobj.c<<endl;
      cout<<"dobj.b :"<<dobj.b<<endl;
      //dobj.a=50;//error: request for member 'a' is ambiguous
        dobj.B::a=50;
        dobj.C::a=80;
        cout<<"dobj.B::a :"<<dobj.B::a<<endl; //solution for diamond problem 
         cout<<"dobj.C::a :"<<dobj.C::a<<endl;

    return 0;
}
