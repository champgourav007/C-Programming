#include<stdio.h>
main()
{
    int n,i,r=0,a;
    printf("Enter any number to know whether it is a pallindromic number  or not");
    scanf("%d",&a);
    n=a;
    while (n>0)
    {
        i=n%10;
        r=i+10*r;
        n=n/10;
    }
    if (r==a)
        printf("%d is the pallindrome number",a);
    else
        printf("It is not a pallindrome number");

}
