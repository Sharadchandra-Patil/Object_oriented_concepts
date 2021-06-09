using namespace std;
#include<iostream>

// FUNCTION TEMPLATE

template <class T> // T : type parameter 

void swap_num(T &o1,T &o2)
{
    T temp = o1;
    o1=o2;
    o2=temp;
}

int main(void)
{
    int n1=50,n2=30;
    float f1=5.4,f2=3.5;
    cout<<" Before Swap : N1 :"<<n1<< " N2  : "<<n2<<endl;
    swap_num<int>(n1,n2); // call to the function by passing template
    // Function template 
     cout<<" After Swap : N1 :"<<n1<< " N2  : "<<n2<<endl;
     cout<<" Before Swap : f1 :"<<f1<< " f2  : "<<f2<<endl;
     swap_num<float>(f1,f2); // call to the function by passing template
     // Function Template 
     cout<<" After Swap : f1 :"<<f1<< " f2  : "<<f2<<endl;

}


/*
template <class T1,class T2>

void swap_num(T1 a,T2 b)
{

}

swap_num<int,float>(4,2.6);
swap_num<float,int>(4.5,3);

*/