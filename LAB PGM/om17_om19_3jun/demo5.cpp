#include<iostream>
using namespace  std;
int sum(int a=0, int b=0, int c=0, int d=0);
int main()
{
    int ans;
    ans=sum(10,20,30,40);
    cout<<"ans="<<ans<<endl;

    ans=sum(10,20,30);
    cout<<"ans="<<ans<<endl;

    ans=sum(10,20);
    cout<<"ans="<<ans<<endl;

    ans=sum(10);
    cout<<"ans="<<ans<<endl;

    ans=sum();
    cout<<"ans="<<ans<<endl;

    return 0;
}
int sum(int a, int b, int c, int d)
{
    cout<<"\ta="<<a<<"\tb="<<b<<"\tc="<<c<<"\td="<<d<<endl;
    return a+b+c+d;
}
