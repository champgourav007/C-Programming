#include<stdio.h>
main()
{
    int n,i,sum=0;
    printf("Enter number");
    scanf("%d",&n);
    for (i=1;i<n;i++)
    {
        if (n%i==0)
            sum=sum+i;
    }
    if (sum==n)
        printf("It is perfect number");
        else
            printf("Not a perfect number");
}
