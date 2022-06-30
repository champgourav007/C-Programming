#include<stdio.h>
main()
{
    int num,count=0,i;
    printf("Enter any number");
    scanf("%d",&num);
    for (i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }

    }
    if(count==2)
        printf("It is prime number");
    else
        printf("Not a prime number");

}
