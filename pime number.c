#include<stdio.h>
main()
{
    int n,i,count=0;
    printf("Enter Any Number ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        if (n%i==0)
            count++;
    }
    if(count==2)
        {
            printf("%d is prime number",n);
        }
    else
    {
        printf("Not a Prime Number");
    }
}

