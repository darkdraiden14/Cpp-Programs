#include<iostream>
using namespace std;
class a
{
	public:
		a()
		{
			cout<<"Sum o f a";
		}
};
class b
{
	public :
	 b()
	 {
	 	cout<<"Con of b";
	 }
};
class c:public a,public b
{
 public:
 	c()
 	{
 		cout<<"c con";
	 }
};
int main()
{
	c obj;
}
