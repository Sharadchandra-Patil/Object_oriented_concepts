#include<iostream>
using namespace std;
class Maths
{
    public:
        static int sum(int n1, int n2)
        {
            return n1+n2;
        }
        static int minus(int n1, int n2)
        {
            return n1-n2;
        }

};
int main()
{
    int result;
    result= Maths::sum(10, 20);
    cout<<"result using class name::"<<result<<endl;
    result= Maths::minus(10, 20);
    cout<<"result using class name::"<<result<<endl;
    
    Maths obj1;
    result= obj1.sum(10, 20);
    cout<<"result using object name::"<<result<<endl;
    result= obj1.minus(10, 20);
    cout<<"result using object name::"<<result<<endl;
    
   
    return 0;
}