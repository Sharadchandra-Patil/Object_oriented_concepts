using namespace std;
#include<iostream>
class Demo
{
    int num1;
    int num2;

    public:
    void set(int num1,int num2)
    {
        this->num1=num1;
        this->num2=num2;
    }
    void disp()
    {
        cout<< "N1 : "<<num1<< " N2 : "<<num2;
    }
};
int main(void)
{
    Demo dobj;
    dobj.set(40,20);
    dobj.disp();
    return 0;
}



