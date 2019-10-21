#include<stdio.h>
#include<time.h>
int main()
{       
	time_t t =time(NULL);
	struct tm tm=*localtime(&t);
    float bill,rate[10],gst=0;
    int qty[10],i,n;
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
    printf("\n\t\t|\t\t\t    Time= %d/%d/%d|",tm.tm_hour,tm.tm_min,tm.tm_sec);
	printf("\n\t\t|Customer name:   %s\t\t\t  |",cname);
	printf("\n\t\t|_________________________________________|");
    printf("\n\t\t|Item name|\tRate|\tQty|\tAmount\t  |");
    printf("\n\t\t|_________________________________________|");
    for(i=0;i<n;i++)
    {
    	printf("\n\t\t|  %s\t  |%.2f     |\t%d  |\t%.2f\t  |",item[i],rate[i],qty[i],rate[i]*qty[i]);
    }
    printf("\n\t\t|_________________________________________|");
    printf("\n\t\t|\t\t\tGST    %.2f\t  |",gst);
    printf("\n\t\t|_________________________________________|");
    printf("\n\t\t|\t\t\tTotal  %.2f\t  |",bill);
    printf("\n\t\t|_________________________________________|");
    printf("\n\t\t|_________________________________________|");
}
