using namespace std;
#include<iostream>


inline int max(int n1,int n2) //inline function
{
    //int result = (n1>n2)?n1:n2;
    return (n1>n2)?n1:n2;
}
int main(void)
{
    int res;
    res=max(50,20);
    cout<<"Result : "<<res;
    return 0;
}



//functions
// 1.function declaration / function prototype/ function signature
//2. Function definition / Function body
// 3. Function call



/*void test(); //function declaration (global function)

int main(void)
{
    // Scope resolution operator 
    // is to access the global functions
    test();
    ::test();
    return 0;
}

void test()
{
    cout<<"Inside test function";
}

*/