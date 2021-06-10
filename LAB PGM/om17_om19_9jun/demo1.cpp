#include<iostream>
using namespace std;
namespace NFriendDemo
{
    class FriendDemo
    {
        private:
            int no1;
            int no2;
        public:
            FriendDemo()
            {
                this->no1=10;
                this->no2=20;
            }
            void Print()
            {
                cout<<" no1= "<<this->no1<<endl;
                cout<<" no2= "<<this->no2<<endl;
            
            }
            ~FriendDemo()
            {
                this->no1=0;
                this->no2=0;
            }
    friend int sum();

    };
    int sum()
    {
        FriendDemo obj1;
        int result= obj1.no1+ obj1.no2;
        cout<<"result="<<result<<endl;     
    }
}
using namespace NFriendDemo;
int main()
{
    sum();
    return 0;
}
