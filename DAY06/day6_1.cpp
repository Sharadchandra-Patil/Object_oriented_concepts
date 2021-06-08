using namespace std;
#include<iostream>

int main(void)
{
    int n,i;

    cout<<" Enter Number of elements you wish to insert in an array :";
    cin>>n;
    // STEP 1 : Request for memory  
    int *ptr=new int[n]; // new is a keyword which is used to allocate memory dynamicaaly
    // heap section
    
    // STEP2 : USE THE MEMORY 
    cout<<" Insert the array elements :";
    for(i=0;i<n;i++)
    {
        cin>>ptr[i];
    }
    cout<<" \n The array elements are:";
    for(i=0;i<n;i++)
    {
        cout<<"\t"<<ptr[i];
    }
   
    // STEP 3: Release the memory
    delete []ptr; 
    ptr=NULL; // To avoid memory leakage 

    return 0;
}