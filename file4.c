#include<stdio.h>
main()
{
    int a,b=1,i;
    printf("Enter any number to find its factorial");
    scanf("%d",&a);
    for (i=1;i<=a;i++)
    {
        b=b*i;
    }
    printf("Factorial of %d is %d",a,b);
}
