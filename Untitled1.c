#include<stdio.h>
#include<stdio.h>
main()
{
    int a,b,n,s=0,count,c;
    printf("Enter any number");
    scanf("%d",&n);
    a=n;
    while (a!=0)
    {
        a=a/10;
        count++;
    }
    b=n;
    while (b!=0)
    {
        c=b%10;
        s=s+pow(c,count);

    }
    if (s==n)
        printf("%d is armstrong number",n);
    else
        printf("%d not an armstrong number",n);

}
