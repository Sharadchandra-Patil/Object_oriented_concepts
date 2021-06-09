
using namespace std;
#include<iostream>


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

        // pt3 = pt1.operator+(pt2);
        // operator+() is called upon pt1 object (this)
        // operator+() is taking pt2 object as an argument
        // &other = pt2
    Point operator+(Point &other)
    {
            Point temp;
            temp.x= this->x + other.x;
            temp.y=this->y + other.y;
            return temp;

    }

};

int main(void)
{
    Point pt1;
    Point pt2;
    Point pt3;
    pt3=pt1+pt2;  

    // pt3 = pt1.operator+(pt2);
    // if we wish to overload binary operator , operator+() is member function
    //of class, then operatpr+() takes one argument

    pt3.disp();


    return 0;
}