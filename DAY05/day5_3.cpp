using namespace std;
#include<iostream>
int main(void)
{
    int num=20;
    int &r=num; // r is reference variable

    cout<<" Num : "<<num << " R : "<<r<<endl;
    cout<<" &Num : "<<&num << " &R : "<<&r<<endl;

    num+=5;
    cout<<"After Modification of num "<<endl;
    cout<<" Num : "<<num << " R : "<<r<<endl;
    cout<<" &Num : "<<&num << " &R : "<<&r<<endl;

    r+=5;
    cout<<"After Modification of r "<<endl;
    cout<<" Num : "<<num << " R : "<<r<<endl;
    cout<<" &Num : "<<&num << " &R : "<<&r<<endl;


    return 0;
}