using namespace std;
#include<iostream>
#include<iomanip> //input output manipulation

int main(void)
{
    int num=25;
    //printf("%10d",num);
    cout<<setw(10)<<num;
    return 0;
}







/*
OOP
DAY02\namespace
*/



/*
int main(void)
{
    int num=32;
    cout<<"Num :"<<num;
    cout<<"\n Num in octal : "<<setbase(8)<<num;
    cout<<"\n Num in hexa : "<<setbase(16)<<num;
    cout<<"\n alternative way to present number in oct : "<<oct<<num;
    cout<<"\n alternative way to present number in hex : "<<hex<<num;
    return 0;
}
*/




/*
int main(void)
{
    cout<<"\"OOP\""<<endl; //endl or \n
    cout<<"DAY02\\namespace";

    return 0;
}
*/


/*
namespace na // we can not declare main() inside namespace
{
    int main()
    {

    }
}
*/

/*

int main(void)
{
    cout<<"Object Oriented Programing Language";
    cout<<"\n OM17-OM19-Batch";
    return 0;
}
*/

/*
#include<iostream>
int main(void)
{
    std::cout<<"Object Oriented Programing Language";
    std::cout<<"\n OM17-OM19-Batch";
    return 0;
}

//cout variable must be declared within namespace std
//  if we wish to access any namespace variable
// namespace_name::variablename
//   std :: cout

*/