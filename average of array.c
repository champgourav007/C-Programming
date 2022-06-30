#include<stdio.h>
main()
{
    int a[10],i,sum=0,avg;
    printf("Enter an array to find its average");
    for (i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/10;
    printf("Average of an arrray is %d",avg);
}
