#include<stdio.h>
main()
{
    int a,n,r=0,r1;
    printf("Enter any number to know whether a no is pallindrome no or not");
    scanf("%d",&a);
    n=a;
    while (n>0)
    {
        r1=n%10;
        r=r*10+r1;
        n=n/10;


    }
    if (r==a)
        printf("It is pallindrome");
    else
        printf("It is not pallindrome number");

}
