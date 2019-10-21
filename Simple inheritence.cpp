#include<iostream>
using namespace std;
class add
{
	protected:
		int num1,num2;
	public:
	    void accept()
		{
		  cout<<"Enter First No.";
		  cin>>num1;
		  cout<<"Enter Second no.:";
		  cin>>num2;	
		}	
		
};//Class add ends here.
class addition:public add
{
	int sum;
	public:
		void add()
		{
			sum=num1+num2;
		}
		void display()
		{
			cout<<"Addition of two no. :"<<sum;
		}
};//class addition ends here
int main()
{
	addition a;
	a.accept();
	a.add();
	a.display();
	return 0;
}
