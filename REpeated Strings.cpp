#include<iostream>
using namespace std;
int min(long int i,long int j,long int l)
{
    while(i>=l)
    {
        i=j-l;
    }
    return i;
}
int check(string s,long int n)
{
	long int i=0,j=0,c=0,l;
	l=s.length();
	while(j<n)
    {
        i=j;
        if(i>=l)
        {
            i=min(i,j,l);
        }
        if(s[i]=='a')
        {
            c++;
        }
        j++;
    }
    return c;
}
int main()
{
    string s;
    long int n;
    cin>>s>>n;
    cout<<check(s,n);
}
