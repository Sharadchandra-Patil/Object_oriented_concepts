using namespace std;
#include<iostream>

void swap_by_val(int a,int b);  //call by value 
void swap_by_address(int *a,int *b); // call by address
void swap_by_ref(int &a,int &b); // call by reference

int main(void)
{
    int num1=10,num2=20;
    //cout<<"Before : Num1 :"<<num1<<" Num2 :"<<num2<<endl;
    //swap_by_val(num1,num2);
    //cout<<"After : Num1 :"<<num1<<" Num2 :"<<num2<<endl;
    
    //cout<<"Before : Num1 :"<<num1<<" Num2 :"<<num2<<endl;
    //swap_by_address(&num1,&num2);
    //cout<<"After : Num1 :"<<num1<<" Num2 :"<<num2<<endl;

    cout<<"Before : Num1 :"<<num1<<" Num2 :"<<num2<<endl;
    swap_by_ref(num1,num2);
    cout<<"After : Num1 :"<<num1<<" Num2 :"<<num2<<endl;
    
    return 0;
}



void swap_by_val(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void swap_by_address(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

// &a = num1   &b=num2
void swap_by_ref(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}