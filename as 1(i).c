#include<stdio.h>
main()
{
    int i,sum=0,range;
    printf("Enter the range of the series: ");
    scanf("%d",&range);
    for(i=1;i<=range;i++)
    {
        sum=sum+i;
    }
    printf("%d is the sum of the series",sum);
}
