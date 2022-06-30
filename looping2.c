#include<stdio.h>
#include<math.h>
main()
{
    int a,i,r,b=a,c=0;
    printf("Enter the number");
    scanf("%d",&a);
    while (a!=0)
    {
        a=a/10;
        i++;
    }
    int n=b;
    while (b!=0)
    {
        r=b%10;
    r=c+pow(r,i);
    b!=0;
    }
    if (r==n)
        printf("%d It is armstrong%d",n,r);
    else
        printf("%d It is not a armstrong %d",n,r);
}

