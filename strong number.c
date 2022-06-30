
#include<stdio.h>
main()
{
    int a,n,i,b,s=0,c;
    printf("Enter any number to know whether it is strong number or not");
    scanf("%d",&n);
    a=n;
    while (a!=0)
    {
        c=a%10;
        b=1;
        for (i=1;i<=c;i++)
        {
            b=b*i;
            s=s+b;
        }

        a=a/10;
    }
        if (s==n)
            printf("%d it is strong number",n);
        else
            printf("not an strong number");

}
