#include<iostream>
using namespace std; 
namespace Nemp
{
    class emp
    {
        private:  // variable data member field
            int empno;
            char name[10];
            float sal;

        public: // member fun or method
        void AcceptEmpInfo();
        void DisplayEmpInfo();
       
    }; // end of class emp
    // returntype classname::memberfunname(datatype parameters)
    void emp::AcceptEmpInfo()
    {
        cout<<"Enter empno :: ";
        cin>> empno;
        cout<<"Enter empno :: ";
        cin>> name;
        cout<<"Enter emp Sal :: ";
        cin>> sal;
        return;
    }
    void emp::DisplayEmpInfo()
    {
        cout<<"\n empno   name    sal \n";
        cout<< empno<<" "<< name<<" "<< sal;
        return;
    }
    
}//end of namespace
using namespace Nemp;
int main()
{   //cpp    c
    emp e1;//struct emp e1;
    cout<<"\n Ente emp info :: \n";

    
    e1.AcceptEmpInfo();//AcceptEmpInfo(&e1);
    //e1.sal=0; ///error
    cout<<"\n emp info is ::\n";
    
    e1.DisplayEmpInfo();//DisplayEmpInfo(&e1);
    return 0;
}