#include<iostream>
using namespace std;
// case 1 same name different no of arguements
int sum(int n1, int n2)
{
    return n1+n2;
}
int sum(int n1, int n2, int n3)
{
    return n1+n2+n3;
}
int sum(int n1, int n2, int n3, int n4)
{
    return n1+n2+n3+n4;
}
int main(void)
{
    int ans= sum(10, 20);
    cout<<"ans="<<ans<<endl;

    ans= sum(10, 20, 30);
    cout<<"ans="<<ans<<endl;

    return 0;
}
