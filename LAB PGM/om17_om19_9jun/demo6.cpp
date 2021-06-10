#include<iostream>
using namespace std;
template <class Type>
class Array
{
    private:
        int size;
        Type *arr;
    public:
        Array(int size)
        {
            this->size=size;
            this->arr=new Type [this->size];
            for(int index=0; index<this->size; index++)
            {
                this->arr[index]=0;
            }
        }
        void Accept()
        {
            int index;
            for(index=0; index<this->size; index++)
            {
                cout<<"this->arr["<<index<<"]";
                cin>>this->arr[index];
            }
        }
        void Print()
        {
            int index;
            for(index=0;index<this->size;index++)
            {
                cout<<"this->arr["<<index<<"]::" << this->arr[index]<<endl;
            }
        }
        ~Array()
        {
            if(this->arr!=NULL)
            {
                delete [] this->arr;
                this->arr=NULL;
            }
        }
};

int main()
{
    Array<int> a1(4);
    cout<<"a1::";
    a1.Accept();
    cout<<"a1="<<endl;
    a1.Print();

    Array<float> a2(4);
    cout<<"a2::";
    a2.Accept();
    cout<<"a2="<<endl;
    a2.Print();

    Array<char> a3(4);
    cout<<"a3::";
    a3.Accept();
    cout<<"a3="<<endl;
    a3.Print();
    return 0;
}