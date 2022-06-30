#include<stdio.h>
main()
{
    int n,a=1,i;
    printf("Enter any  number to find its factorial");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=a*i;
    }
    printf("%d",a);
}
