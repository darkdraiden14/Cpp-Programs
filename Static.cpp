#include<iostream>
using namespace std;
class demo
{
	private:
	 static int y;
	public:
		 static void fun()
		{
			cout<<"Value of y:"<<y<<endl;
		}
};
int demo::y=100;

int main()
{
    demo::fun();
	return 0;
}
