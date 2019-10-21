#include<iostream>
using namespace std;
int main()
{
    string s1,s2;
    int hh,mm,ss;
    char c;
    cin>>s1;
    hh=(s1[0]*10)+s1[1];
    mm=(s1[3]*10)+s1[4];
    ss=(s1[6]*10)+s1[7];
    c=s1[8];
    if(c=='P')
    {
        hh=hh+12;
        if(hh==24)
        {
            hh=0;
        }
    }
    s2[1]=hh%10;
    hh=hh-s2[1];
    s2[0]=hh;
    for(int i=2;i<8;i++)
    {
        s2[i]=s1[i];
    }
    cout<<s2;
}
