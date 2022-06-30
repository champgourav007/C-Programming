#include<stdio.h>
main()
{
    int n,i,a,b=1,s=0,c;
    printf("Enter any number");
    scanf("%d",&n);
    a=n;
    while (a!=0)
    {
        c=a;
        a=a%10;
        while (i<=a)
        {
            b=b*i;
            s=s+b;
            i++;
        }
        a=c/10;
    }
    if (s==n)
        printf("%d is the strong number",n);
    else
        printf("%d is not a strong number",n);
}
