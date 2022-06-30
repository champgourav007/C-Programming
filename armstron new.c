#include<stdio.h>
#include<math.h>
main()
{
    int n, a, count=0,r=0,i;
    scanf("%d",&n);
    n=a;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    i=a;
    while(i!=0)
    {
         i=i%10;
         r= r + pow(i,count);
         i/=10;
    }
    if (r==a)
        printf("%d is the armstrong number",a);
    else
        printf("It is not a armstrong number");
}
