
using namespace std;
#include<iostream>
#include<stdlib.h>

int main()
{
	int i;
	int *ptr=new int[4];
	for(i=0;i<4;i++)
        ptr[i]=i;

	for(i=0;i<4;i++)
		cout<<ptr[i]<<" ";

	return 0;
}