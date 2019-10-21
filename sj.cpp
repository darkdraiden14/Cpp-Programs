#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	string line;
	ifstream file("example.txt");
	if(file.is_open())
	{
		while(!file.eof())
		{
			getline(file,line);
			cout<<line<<endl;
	   }
	   file.close();
	}
	else
	{
		cout<<"Unable to open";
	}
	return 0;
}
