#include<iostream>
using namespace std;
// case 1 same name different order of arguements
float sum(int n1, float n2)
{
    return n1+n2;
}
float sum(float n1, int n2)
{
    return n1+n2;

}
int main(void)
{
    int ans= sum(10.3f, 20);
    cout<<"ans="<<ans<<endl;

    float ans1= sum(10, 20.2f);
    cout<<"ans1="<<ans1<<endl;

    return 0;
}
