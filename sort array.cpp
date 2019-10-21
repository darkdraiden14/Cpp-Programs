#include<iostream>
using namespace std;
int main()
{
	int n=4;
	int a[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Array is:"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int k=1;k<=n*n;k++)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(k==a[i][j])
				{
					if(k<=n)
					{
						int temp;
						temp=a[i][j];
						a[i][j]=a[0][k-1];
						a[0][k-1]=temp;
					}
					else if(k>n&&k<=2*n)
					{
						int temp;
						temp=a[i][j];
						a[i][j]=a[1][k-n-1];
						a[1][k-n-1]=temp;
					}
					else if(k>2*n&&k<=3*n)
					{
						int temp;
						temp=a[i][j];
						a[i][j]=a[2][k-(2*n)-1];
						a[2][k-(2*n)-1]=temp;
					}
					else if(k>3*n&&k<=4*n)
					{
						int temp;
						temp=a[i][j];
						a[i][j]=a[3][k-(3*n)-1];
						a[3][k-(3*n)-1]=temp;
					}
				}
			}
		}
	}
	cout<<"After sorting:"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
