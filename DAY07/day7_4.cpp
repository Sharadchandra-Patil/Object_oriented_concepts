using namespace std;
#include<iostream>


//CLASS TEMPLATE
// Allocate memory dynamically for array
// new keyword
// int 4elements ===> int *ptr =new int[n]
// char 3 elements ==> char *ptr = new char[n] 

template<class T>

class Array
{
    private:
        int size;
        T *arr; //T is a template
    public:
    Array():size(0),arr(NULL){} //constructor member initializer list
    //Array()
    //{
        //this->size=0;
      //  this->arr= NULL;
    //}


    Array(int size)
    {
        this->size=size;
        this->arr=new T[this->size]; //dynamic memory allocation
        // T : int 
        //this->arr=new int[this->size];
        //T : char
        //this->arr=new char[this->size];
    }
    void accept()
    {
        int i;
        cout<<"\n Enter Elements :";
        for(i=0;i<this->size;i++)
            cin>>arr[i];
    }

    void disp()
    {
        int i;
        cout<<"\n Elements are :";
        for(i=0;i<this->size;i++)
            cout<<"\t"<<arr[i];
    }
    ~Array()
    {
        delete []arr;
        this->arr=NULL;
    }
}; //end of class

int main(void)
{
    //CLASS TEMPLATE 
    Array <int>a1(4);
    a1.accept();
    a1.disp();
    Array <char>a2(3);
    a2.accept();
    a2.disp();
     

    return 0;
}

