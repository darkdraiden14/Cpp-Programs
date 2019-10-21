#include<iostream>
using namespace std;
int output(int,int,int [],int []);
int max(int, int);
float result[5][5]={0};
int main()
{
	int No,cap;
	cin>>No>>cap;
	int value[No]={0};
	int weight[No]={0};
	for(int i=0;i<No;i++)
	{
		cin>>value[i];
		cin>>weight[i];
	}
	cout<<output(No-1,cap,value,weight);
}
int output(int n,int c,int v[],int w[])
{
	int count1=0;
	int count2=0;
	if(result[n][c]!=0)
	{
		return result[n][c];
	}
	if (n==0)
	{
        if (w[0]<=c)
		{
			result[n][c]=v[0];
            return v[0];
        }
        else
		{
			result[n][c]=0;
            return 0;
        }
    }
    if (w[n]<=c)
    {
        count1 = v[n] + output(n-1,c-w[n],v,w);
    }
    count2=output(n-1,c,v,w);

    result[n][c] = max(count1,count2);

    return result[n][c];
}
int max(int a,int b)
{
	return (a>b)?a:b;
}
