#include<iostream>
using namespace std;
double div(int a,int b)
{
	if(b==0)
	{
		throw"Divide by zero";
	}
	return a/b;
}
int main()
{
	int x=50,y=0;
	double z=0;
	try
	{
		z=div(x,y);
		cout<<z<<endl;
	}
	catch(char const *msg)
	{
		cerr<<msg;
	}
	return 0;
}
