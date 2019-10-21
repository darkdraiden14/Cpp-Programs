#include <iostream>
#include<string.h>
using namespace std;

int main()
{
	// your code goes here
	int T;
	cin>>T;
	int c,n;
    string s;
	//for(int z=0;z<T;z++)
	//{
		c=0;
	    getline(cin,s);
	    n=s.length();
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='n'&&s[i+1]=='o'&&s[i+2]=='t')
	        {
	            c=1;
	            break;
	        }
	    }
	    if(c==1)
	    {
	        cout<<"Real Fancy"<<endl;
	    }
	    else
	    {
	        cout<<"regularly Fancy"<<endl;
	    }
	//}
	return 0;
}

