using namespace std;
#include<iostream>

int main(void)
{
    int num;
    //printf("Enter Num :");
    cout<<"Enter Num : ";
    //scanf("%d",&num);
    cin>>num;
    //cin : Console Input ( >> )
    //printf("Num : %d",num);
    cout<<"\n Num : "<<num <<" Address of num : "<<&num;
    return 0;
}

/*
int main(void)
{
    int num=10;
    float f=5.6;
    //printf("hello");
    cout<<"hello";
   // cout : Console Output ( It uses << ) 
   //printf("Number : %d",num);
   // Number : 10
    cout<<"\n Number : "<<num;
    cout<<" \n Float Value : "<<f;
    cout<<"\n Num  Value : "<<num<<" Float Value is :"<<f;
    
    return 0;
}

*/