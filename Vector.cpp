#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> s(8);
	for(int i=0;i<8;i++)
	{
		cin>>s[i];
	}
	for(int i=0;i<8;i++)
	{
		cout<<s[i]<<" ";
	}
}
