#include<iostream>
//using namespace std;
int main(void)
{
    {
        int no1, no2;
        std::cout<<"Enter No1::";
        std::cin>>no1;

        std::cout<<"Enter No2::";
        std::cin>>no2;

        std::cout<<"no1 = "<<no1<<"\t &no1::"<<&no1<<std::endl;
        std::cout<<"no2 = "<<no2<<"\t &no2::"<<&no2<<std::endl;
    }
    
    using namespace std;
    cout<<"=============================="<<"\n";
     {
        float no1, no2;
        cout<<"Enter No1::";
        cin>>no1;

        cout<<"Enter No2::";
        cin>>no2;

        cout<<"no1 = "<<no1<<"\t &no1::"<<&no1<<endl;
        cout<<"no2 = "<<no2<<"\t &no2::"<<&no2<<endl;
    }
    cout<<"=============================="<<"\n";
     {
        char no1, no2;
        cout<<"Enter No1::";
        cin>>no1;

        cout<<"Enter No2::";
        cin>>no2;

        cout<<"no1 = "<<no1<<"\t &no1::"<<(void*)&no1<<endl;
        cout<<"no2 = "<<no2<<"\t &no2::"<<(void*)&no2<<endl;
    }
    

    return 0;
}