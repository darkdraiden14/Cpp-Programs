#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int d,i,s,t,a,b,m,n,c1=0,c2=0;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m,n;
    for(i=0;i<m;i++)
    {
        cin>>d;
        d=a+d;
        if(d>=s&&d<=t)
            c1++;
    }
    for(i=0;i<n;i++)
    {
        cin>>d;
        d=b+d;
        if(d>=s&&d<=t)
            c2++;
    }
    cout<<c1<<endl<<c2;
    return 0;
}
