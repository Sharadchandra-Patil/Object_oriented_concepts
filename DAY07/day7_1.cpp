using namespace std;
#include<iostream>


/*
class Point
{
    public:
    int x;
    int y;
    Point()
    {
        this->x=10;
        this->y=10;
    }
    Point(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    ~Point(){}

    void disp()
    {
        cout<<" X : "<<x<<" Y : "<<y<<endl;
    }

};

// writing the operator function in global area 
//overload + operator
//  + is binary operator 
// if we wish to overload binary operator and if we write a global operator function 
//then operator function takes two arguments 

Point operator+(Point &pt1,Point &pt2)
{
    Point temp;
    temp.x=pt1.x+pt2.x;
    temp.y=pt1.y+pt2.y;
    return temp;
}

Point operator-(Point &pt1,Point &pt2)
{
    Point temp;
    temp.x=pt1.x-pt2.x;
    temp.y=pt1.y-pt2.y;
    return temp;
}

int main(void)
{
    int n1=300,n2=200;
    Point pt1(60,40); 
    Point pt2(50,30); // 50 30 
    pt1.disp();
    pt2.disp();
    Point pt3;
    pt3=pt1+pt2; 
    // pt3 = operator+(pt1,pt2); 
    pt3.disp();
    cout<<" N1 + n2 : "<<n1+n2<<endl; 
    pt3=pt1-pt2;
    pt3.disp();


    
    
    return 0;
}

*/

/*
pt4=pt1+pt2+pt3;
pt4=operator+(pt1+pt2) + pt3
pt4 = temp + pt3
pt4= operator+(temp,pt3)
pt4=temp;



pt4=pt1+pt2+pt3;
pt4=pt1.operator+(pt2) + pt3
pt4 =   temp           + pt3
pt4= temp.operator+(pt3)
pt4 = temp 




*/




/*
class Point
{
    public:
    int x;
    int y;
    Point()
    {
        this->x=10;
        this->y=10;
    }
    Point(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    ~Point(){}

    void disp()
    {
        cout<<" X : "<<x<<" Y : "<<y<<endl;
    }

};

int main(void)
{
    Point p1;
    Point p2;
    Point p3;
    p3=p1+p2; // error: no match for 'operator+'
    //we are trying to add two objects by using + operator
    //so we need to write OPERATOR FUNCTION
    p3.disp(); 
    
    return 0;
}
*/





