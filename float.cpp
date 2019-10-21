#include<iostream>
using namespace std;
int main()
{
	float f;
	int c;
	cin>>f;
	cout<<f;
	c=f;
	float e=f-c;
	if(e>=0.50)
	{
		c=f+1;
	}
	cout<<endl<<c;
	return 0;
}
