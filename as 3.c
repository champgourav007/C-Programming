#include<stdio.h>
main()
{
    int sum,i,temp,a;
    printf("Armstrong number are : \n");
    for (i=100;i<=500;i++)
    {
        temp=i;
        sum=0;
        while (temp!=0)
        {
            a=temp%10;
            sum=sum+(a*a*a);
            temp=temp/10;
        }
        if (sum==i)
        {
            printf(" %d ",i);
        }
    }
}

