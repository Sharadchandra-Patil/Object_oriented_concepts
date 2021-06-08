#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int &r=a; // r is a reference of a
    //int * const r=&a;  

    cout<<"a="<<a<<" \t &a"<<&a<<endl;
    cout<<"r="<<r<<" \t &r"<<&r<<endl;

    a++;
    cout<<"a="<<a<<" \t &a"<<&a<<endl;
    cout<<"r="<<r<<" \t &r"<<&r<<endl;

    ++r;
    cout<<"a="<<a<<" \t &a"<<&a<<endl;
    cout<<"r="<<r<<" \t &r"<<&r<<endl;

    {
        //int &r1=NULL; // error
        int a=10;
      //  int &r1=10; // error
    }
    return 0;

}