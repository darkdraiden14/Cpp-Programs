#include<iostream>
#include<cstdio>
#include<time.h>
using namespace std;
string one[] = { "", "one ", "two ", "three ", "four ", 
                 "five ", "six ", "seven ", "eight ", 
                 "nine ", "ten ", "eleven ", "twelve ", 
                 "thirteen ", "fourteen ", "fifteen ", 
                 "sixteen ", "seventeen ", "eighteen ", 
                 "nineteen "
               }; 
  
// strings at index 0 and 1 are not used, they is to 
// make array indexing simple 
string ten[] = { "", "", "twenty ", "thirty ", "forty ", 
                 "fifty ", "sixty ", "seventy ", "eighty ", 
                 "ninety "
               }; 
  
// n is 1- or 2-digit number 
string numToWords(int n, string s) 
{ 
    string str = ""; 
    // if n is more than 19, divide it 
    if (n > 19) 
        str += ten[n / 10] + one[n % 10]; 
    else
        str += one[n]; 
  
    // if n is non-zero 
    if (n) 
        str += s; 
  
    return str; 
} 
  
// Function to print a given number in words 
string convertToWords(long n) 
{ 
    // stores word representation of given number n 
    string out; 
  
    // handles digits at ten millions and hundred 
    // millions places (if any) 
    out += numToWords((n / 10000000), "crore "); 
  
    // handles digits at hundred thousands and one 
    // millions places (if any) 
    out += numToWords(((n / 100000) % 100), "lakh "); 
  
    // handles digits at thousands and tens thousands 
    // places (if any) 
    out += numToWords(((n / 1000) % 100), "thousand "); 
  
    // handles digit at hundreds places (if any) 
    out += numToWords(((n / 100) % 10), "hundred "); 
  
    if (n > 100 && n % 100) 
        out += "and "; 
  
    // handles digits at ones and tens places (if any) 
    out += numToWords((n % 100), ""); 
  
    return out; 
} 
int main()
{       
	time_t t =time(NULL);
	struct tm tm=*localtime(&t);
    float rate[10],gst=0;
    int qty[10],i,n,bill=0;
    char item[10][20],cname[20];
    printf("\nEnter the name of Customer=");
    gets(cname);
    printf("\n\nHow many purchase items=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n\nEnter the %d item name=",i+1);
        scanf("%s",item[i]);
        printf("\nEnter the rate of %s item=",item[i]);
        scanf("%f",&rate[i]);
        printf("\nEnter the quantity of %s item=",item[i]);
        scanf("%d",&qty[i]);
        bill=bill+(rate[i]*qty[i]);
    }
    gst=(bill*12)/100;
    bill+=gst;
    printf("\n\n\t\t__________________________________________|");
    printf("\n\t\t|\t\t\t  Date= %d/%d/%d|",tm.tm_year +1900,tm.tm_mon +1,tm.tm_mday);
    printf("\n\t\t|\t\t\t    Time= %d:%d:%d |",tm.tm_hour,tm.tm_min,tm.tm_sec);
	printf("\n\t\t|Customer name:   %s\t\t\t  |",cname);
	printf("\n\t\t|_________________________________________|");
    printf("\n\t\t|Item name|\tRate|\tQty|\tAmount\t  |");
    printf("\n\t\t|_________________________________________|");
    for(i=0;i<n;i++)
    {
    	printf("\n\t\t|  %s\t  |%.2f    |\t%d  |\t%.2f\t  |",item[i],rate[i],qty[i],rate[i]*qty[i]);
    }
    printf("\n\t\t|_________________________________________|");
    printf("\n\t\t|\t\t\tGST    %.2f\t  |",gst);
    printf("\n\t\t|_________________________________________|");
    printf("\n\t\t|\t\t\tTotal  %d\t  |",bill);
    printf("\n\t\t|_________________________________________|");
    cout<<endl<<convertToWords(bill);
    printf("\n\t\t|_________________________________________|");
}
