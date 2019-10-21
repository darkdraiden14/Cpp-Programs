#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    { 
        int n,c=1,i=0;
        string s;
        cin>>s;
        string r(s);
        reverse(r.begin(),r.end());
        n=s.length();
        int k[n-1],l[n-1];
        for(i=1;i<n;i++)
        {
            k[i-1]=s[i]-s[i-1];
        }
        for(i=1;i<n;i++)
        {
            l[i-1]=r[i]-r[i-1];
        }
        i=0;
        while(c==1&&i<n)
        {
           if(k[i]!=l[i])
              c=0;
        }
        cout<<s<<endl;
        cout<<r<<endl;
        if(c==0)
        {
            cout<<"Not Funny"<<endl;
        }
        else
        {
            cout<<"Funny"<<endl;
        }
    } 
}


