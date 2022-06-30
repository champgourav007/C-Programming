#include<stdio.h>
main()
{
    int n,sum=0,a,f,i,count=0,b;
    printf("Enter any number");
    scanf("%d",&n);
    a=n;
    while(a>0)
    {
        b=a;

        f=1;
        b=a%10;
        for(i=1;i<=b;i++)
        {
            f=f*i;
        }
        sum=sum+f;
        a=a/10;
    }
    if(sum==n)
        printf("%d is the strong number",n);
    else
        printf("Not an strong number");
    }
