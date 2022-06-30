#include<stdio.h>
main()
{
    int n,i;
    float b,a=0;
    printf("Enter any natural number");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        a=a+i;
    }
    b=a/n;
    printf("average of n natural number is %f",b);
}
