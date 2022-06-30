#include<stdio.h>
main()
{
    int a[10],sum=0,i;
    printf("Enter an array to find its sum");
    for (i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("Sum of an array is %d",sum);
}
