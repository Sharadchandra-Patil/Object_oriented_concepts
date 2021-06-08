#include<iostream>
using namespace std;
int main()
{
    int *ptr, index, no;

    try
    {
        cout<<"how many no u want ::";
        cin>>no;
        ptr= new int[no];

        cout<<"Enter elements of array :: "<<endl;
        for(index=0; index<no; index++)
        {
            cout<<"ptr["<<index<<"]:";
            cin>>ptr[index];
        }
        cout<<"Elements of array :: "<<endl;
        for(index=0; index<no; index++)
        {
            cout<<ptr[index]<<"["<< &ptr[index]<<"]"<<endl;
        }
    
        delete [] ptr; // delete ptr;
        ptr=NULL;
        cout<<"memory is free"<<endl;
    
    }catch(bad_alloc)
    {
        cout<<"unable to allocate memory"<<endl;;
    }
    return 0;
}