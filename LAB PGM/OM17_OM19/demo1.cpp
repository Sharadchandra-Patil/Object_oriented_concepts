#include<iostream>
using namespace std;
int main()
{
    int no1=10, no2=0, result;

    try
    {
        if(no2==0)
            throw 1.2f;
           //throw 1.2;
           // throw 'a';
            //throw 1;
        result= no1/no2;
        cout<<"res="<<result<<endl;
    }
    
    catch(int)
    {
        cout<<"inside int block1"<<endl;
        cout<<"can not divide by zero"<<endl;
    }
    catch(int)
    {
        cout<<"inside int block2"<<endl;
        cout<<"can not divide by zero"<<endl;
    }
    catch(float)
    {
        cout<<"inside float block2"<<endl;
        cout<<"can not divide by zero"<<endl;
    }
     catch(...)// generic block
    {
        cout<<"inside int genric catch"<<endl;
        cout<<"can not divide by zero"<<endl;
    }
    
   
    return 0;
}