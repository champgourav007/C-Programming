#include<stdio.h>
main()
{
    int n,a,f,b,i,count=0;
    printf("enter any number");
    scanf("%d",&n);
    a=n;
    while (a!=0)
    {
        a=a/10;
        count++;
    }
    f=n%10;

        b=n/pow(10,count-1);
        printf("%d%d",b,f);


}
