#include<stdio.h>
#include<math.h>
main()
{
    int n,c,b,sum=0,count=0;
    printf("Enter any number to know whether it is armstrong number or not");
    scanf("%d",&n);
    b=n;
    while(b!=0)
    {
        b=b/10;
        count++;
    }
    c=n;
    while(c!=0)
    {
        c=c%10;
        sum=sum+pow(c,count);
        c=c/10;

    }
    if (sum==n)
    printf("%d is the armstrong number",n);
    else
        printf("%d is not an armstrong number",n);


}
