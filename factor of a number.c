#include<stdio.h>
main()
{
    int i,n,a,k,flag=0;
    printf("Enter Any Number to get its factor");
    scanf("%d",&n);
    i=2;
    for (k=2;i<=n;k++)
    {
        if (n%i==0)
         printf("%d\n",i);
        i=2*k;
    }
    i=3;
    for(k=2;i<=n;k++)
    {
        if(i%2==0)
        {
            flag=1;
        }
        else if(n%i==0&&flag==0)
            printf("%d\n",i);
        flag=0;
        i=3*k;
    }
    i=7;
    flag=0;
    for(k=2;i<=n;k++)
    {
        if(i%2==0||i%3==0)
        {
            flag=1;
        }
        else if(n%i==0&&flag==0)
        {
            printf("%d\n",i);
        }
        flag =0;
        i=7*k;
    }
    flag=0;
    k=13;
    for(k=2;i<=n;k++)
    {
        if(i%2==0||i%3==0||i%7==0)
        {
            flag=1;
        }
        else if(n%i==0&&flag==0)
        {
            printf("%d\n",i);
        }
        flag =0;
        i=13*k;
    }
    k=17;
    flag=0;
    for(k=2;i<=n;k++)
    {
        if(i%2==0||i%3==0||i%7==0||i%13==0)
        {
            flag=1;
        }
        else if(n%i==0&&flag==0)
        {
            printf("%d\n",i);
        }
        flag =0;
        i=17*k;
    }

}
