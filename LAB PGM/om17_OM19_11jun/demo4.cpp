#include<iostream>
using namespace std;
#include<cstring> //or #include<string.h> 
#pragma pack(1)
namespace NComposition
{
    class Date
    {
        private:
            int dd, mm,yy;
        public:
            Date()
            {
                this->dd=1;
                this->mm=10;
                this->yy=1990;
                cout<<"inside parameterless ctor of Date class"<<endl;
            }
            Date(int dd, int mm,int  yy)
            {
                this->dd=dd;
                this->mm=mm;
                this->yy=yy;
                cout<<"inside parameterized ctor of Date class"<<endl;
            }
            void Print()
            {
                cout<<"date::"<<endl;
                cout<<this->dd<<"-"<<this->mm<<"-"<<this->yy<<endl;
            }
            ~Date()
            {
                this->dd=0;
                this->mm=0;
                this->yy=0;
                cout<<"inside dtor of Date class"<<endl;
            }
    };// end of date class
    class Address
    {
        private:
            char addinfo[40];
            char city[30];
            int pincode;
        public:
            Address()
            {
                strcpy(this->addinfo,"Market yard");
                strcpy(this->city,"Pune");
                this->pincode= 411037;
                cout<<"inside parameterless ctor of Address class"<<endl;
            }
            Address(char* addressinfo, char *city, int pincode)
            {
                strcpy(this->addinfo,addressinfo);
                strcpy(this->city,city);
                this->pincode=pincode;
                cout<<"inside parameterized ctor of Address class"<<endl;
            }
            void Print()
            {
                cout<<"address :: "<<endl;
                cout<<"address info :: "<<this->addinfo<<endl;
                cout<<"city :: "<<this->city<<endl;
                cout<<"pincode :: "<<this->pincode<<endl;
            }
            ~Address()
            {
                strcpy(this->addinfo," ");
                strcpy(this->city," ");
                this->pincode= 0;
                cout<<"inside dtor of Address class"<<endl;
            }

    }; // end of address

    class Person
    {
        private:
                char name[30];  // 30
                Address peradd;  //74

                Date birthdate;   //12
        public:
            
            Person()
            {
                strcpy(this->name,"ABCD");
                cout<<"inside parameterless ctor of Person class"<<endl;
            }
            Person(char *name, char* addressinfo, char *city, int pincode, int dd, int mm,int  yy):peradd(addressinfo,city,pincode), birthdate(dd, mm, yy)
            {
                strcpy(this->name,name);
                cout<<"inside parameterized ctor of Person class"<<endl;
            }
            void Print()
            {
                cout<<"Name :: "<<this->name<<endl;
               // objectname.datamembername();
                peradd.Print();
                birthdate.Print();

            }
            ~Person()
            {
                strcpy(this->name,"");
                cout<<"inside dtor of Person class"<<endl;
            }
    };

}//end of namespace
using namespace NComposition;
int main()
{
    /*
    Date d1;
    cout<<"d1 :: "<<endl;
    d1.Print();
    cout<<"size of d1="<<sizeof(d1)<<endl;
    cout<<"=================================="<<endl;

    Date d2(11,3,1995);
    cout<<"d2 :: "<<endl;
    d2.Print();
    cout<<"size of d2="<<sizeof(d2)<<endl;
    cout<<"=================================="<<endl;
    */
/*

    Address a1;
    cout<<"a1 :: "<<endl;
    a1.Print();
    cout<<"size of a1="<<sizeof(a1)<<endl;
    cout<<"=================================="<<endl;

    Address a2("near st stand", "karad", 40001);
    cout<<"a2 :: "<<endl;
    a2.Print();
    cout<<"size of a2="<<sizeof(a2)<<endl;
    cout<<"=================================="<<endl;*/

    Person p1;
    cout<<"p1 :: "<<endl;
    p1.Print();
    cout<<"size of p1="<<sizeof(p1)<<endl;
    cout<<"=================================="<<endl;
   
    Person p2("Amit", "it park ", "banglore", 567431,29,2,1996);
    cout<<"p2 :: "<<endl;
    p2.Print();
    cout<<"size of p2="<<sizeof(p2)<<endl;
    cout<<"=================================="<<endl;
   
    return 0;
}