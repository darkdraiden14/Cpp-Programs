#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,s1=0,s2=0,no;
    cin>>n;
       
    for(int i=0;i<n;i++)

    {
        for(int j=0;j<n;j++)
        {
            cin>>no;
         if(i==j)
         {
            s1=s1+no;
         }         
             else if(i+j==n-1)
             {     s2=s2+no;  
        }
        }
    }
    cout<<abs(s2-s1);
}
