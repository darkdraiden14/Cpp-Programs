#include<iostream>
using namespace std; 
  
int digSum(int n) 
{ 
    int sum = 0; 
     while(n > 0 || sum > 9) 
    { 
        int m=n % 10;
        sum += m; 
        n /= 10; 
    } 
    return sum; 
} 
  
 
int main() 
{ 
    int dd,mm,yyyy;
	cout<<"Enter D.O.B.(DD/MM/YYYY)";
	cin>>dd;
	cin>>mm;
	cin>>yyyy; 
    int sum1=digSum(dd); 
    int sum2=digSum(mm);
    int sum3=digSum(yyyy);
    int sum=sum1+sum2+sum3;
    cout<<digSum(sum);
	return 0; 
} 
