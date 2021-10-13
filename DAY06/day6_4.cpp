using namespace std;
#include<iostream>
int main(void)
{
    int n1,n2,res;
    cout<<"Enter Num1 :";
    cin>>n1;
    cout<<"Enter Num2 :";
    cin>>n2;

    try
    {
        if(n2==0)
           // throw 1; //1 is integer //throwing an exception object
           //throw 'a';
           throw (5.4);
        else
        {
            res=n1/n2;
            cout<<"Res : "<<res<<endl;
        }

        //logic : condition : throw statement 

    }
    catch(int i)
    {
        cout<<"Num2 value can not be zero";
    }
     catch(char ch)
    {
        cout<<"inside character catch block Num2 value can not be zero";
    }
    catch(...) //generic catch block 
    {
        cout<<"one of the field is zero";
    }
    return 0;
}
