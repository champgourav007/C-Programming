#include<stdio.h>
#include<math.h>
main()
{
    int a,n,r,i=0,b=0;
    printf("Enter any number to know whether it is an armstrong number or not");
    scanf("%d",&a);
    n=a;
    while (n!=0)
    {
        n=n/10;
        i++;
    }
    n=a;
    while (r!=0)
    {
        r=n%10;
        r=b+pow(r,i);
        n/=10;
    }
    if(r==a)
        printf("It is the asrmstrong number");
    else
        printf("It is not an armstrong number");
}
