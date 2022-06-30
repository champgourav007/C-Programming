#include<stdio.h>
#include<math.h>
main()
{
    int a,i=0,t=n,r,n;
    printf("Enter any number");
    scanf("%d",&a);
    while(a!=0)
    {
        a=a/10;
        i++;
    }
    n=t;
    while (t!=0)
    {
        r=t%10;
        r=a+pow(r,i);
        t/=10;
    }
    if (n==a)
        printf("it is armstrong");
    else
        printf("it is not  armstrong");
}
