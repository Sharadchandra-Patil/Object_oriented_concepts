using namespace std;
#include<iostream>
#include<iomanip>

int main(void)
{
    int num=50;
    double d=6.45894;
    cout<<num<<endl;
    cout<<setw(10)<<num<<endl;
    cout<<setw(10)<<setfill('$')<<num<<endl; // $ $ $ $ $ $ $ $ 5 0 
    cout<<d<<endl;
    cout<<setprecision(3)<<d;
    //setprecesion() is used to set the decimal digits to be displayed on 
    //output screen
    // setprecesion() is always used with double value
    return 0;
}


// %10d ==> set the width of 10 spaces
//%6d ==> set the width of 6 spaces
// %06d==> set the width of 6 spaces and it will fill remaining spaces with 0