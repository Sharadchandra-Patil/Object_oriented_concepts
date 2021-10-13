using namespace std;
#include<iostream>
/*
//function with default argument

void disp(int a=100,int b=200,int c=300,int d=400);

//100 ,200,300,400 are default values assigned to a,b,c,d respectively

int main(void)
{
    //disp(10,20,30,40);
    //disp(10,20,30);
    //disp(10,20);
    //disp(10);
    disp();
    return 0;
}

void disp(int a,int b,int c,int d)
{
    cout<<" A "<<a<<" B "<<b<< " C "<<c<< " D "<<d<<endl;
}

*/
/*
void disp(int a,int b,int c,int d);

int main(void)
{
    //disp(10,20,30,40);
    disp(10,20,30);//error: too few arguments to function
    return 0;
}

void disp(int a,int b,int c,int d)
{
    cout<<" A "<<a<<" B "<<b<< " C "<<c<< " D "<<d<<endl;
}
*/





// SAME FUNCTION NAME WITH DIFFERENT NUMBER OF ARGUMENTS
// FUNCTION OVERLOADING (Compile Time Polymorphisim)
// ONE FUNCTION IS TAKING MULTIPLE FORMS
//POLYMORPHISIM

void disp(int a);
void disp(char ch);
void disp(int a,int b);
void disp(float f1,float f2);
void disp(int b,float a);

int main(void)
{
    disp(5); // one argument (int)
    disp('A'); // one argument(char)
    disp(50,30); // two arguments (int , int)
    disp(5.3f,7.8f); // two argument(float,float)
    disp(5,8.3f); //two argument(int,float)
    return 0;
}

void disp(int a)
{
    cout<<"\n inside one argument function :"<<a;
}
void disp(char ch)
{
    cout<<"\n inside char argument function : "<<ch;
}
void disp(int a,int b)
{
    cout<<"\n inside two int argument : "<<a<<" "<<b;

}
void disp(float f1,float f2)
{
    cout<<"\n inside two float argument : "<<f1<<" "<<f2;

}


void disp(int b,float a)
{
     cout<<"\n inside two  argument : "<<a<<" "<<b;
}


