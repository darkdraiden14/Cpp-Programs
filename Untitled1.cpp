#include<iostream>
using namespace std;
class a
{
	protected:
		int p1;
	public:
		void get1()
		{
			cin>>p1;
		}
};
class b
{
	protected:
		int p2;
	public:
		void get2()
		{
			cin>>p2;
		}
};
class c:public a,public b
{
	private:
		float a;
	public:
		void avg()
		{
			a=(p1+p2)/2;
			cout<<a;
	}
};
int main()
{
	c f;
	f.get1();
	f.get2();
	f.avg();
}
