#include<iostream>
using namespace std;

class Array
{
    private:
        int size;
        int *arr;
    public:
        Array(int size)
        {
            this->size=size;
            this->arr=new int [this->size];
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
    Array a1(4);
    cout<<"a1::";
    a1.Accept();
    cout<<"a1="<<endl;
    a1.Print();

    return 0;
}