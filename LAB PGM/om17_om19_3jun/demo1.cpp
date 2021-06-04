#include<iostream>
using namespace std;
#define sq(a) a*a
inline int square(int a);
int main()
{
    int x=5, y=0;
    y= sq(x); // y= x*x;
    cout<<"x="<<x<<" y="<<y<<endl;

    y= square(x);
    cout<<"x="<<x<<" y="<<y<<endl;
    return 0;
}
inline int square(int a)
{
    return a*a;
}