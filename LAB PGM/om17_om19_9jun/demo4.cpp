#include<iostream>
using namespace std;
namespace NSwap
{
    template<class type>
    void swap(type& n1, type& n2)
    {
        type temp;
        temp=n1;
        n1=n2;
        n2=temp;
    }
}
int main()
{
    {
        int no1=10, no2=20;
        cout<<"before swap in main for int"<<endl;
        cout<<"no1="<<no1<<"\t no2="<<no2<<endl;
        swap(no1, no2);
        cout<<"aftercle swap in main"<<endl;
        cout<<"no1="<<no1<<"\t no2="<<no2<<endl;
        
    }
    cout<<"==============================="<<endl;
     {
        float no1=10.2, no2=20.1;
        cout<<"before swap in main for float"<<endl;
        cout<<"no1="<<no1<<"\t no2="<<no2<<endl;
        swap(no1, no2);
        cout<<"aftercle swap in main"<<endl;
        cout<<"no1="<<no1<<"\t no2="<<no2<<endl;
        
    }
    cout<<"==============================="<<endl;
     {
        char no1='a', no2='b';
        cout<<"before swap in main for char"<<endl;
        cout<<"no1="<<no1<<"\t no2="<<no2<<endl;
        swap(no1, no2);
        cout<<"aftercle swap in main"<<endl;
        cout<<"no1="<<no1<<"\t no2="<<no2<<endl;
        
    }
    return 0;
}
