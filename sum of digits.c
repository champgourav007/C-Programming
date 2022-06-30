#include<stdio.h>
main()
{
    int num,rem,sum=0;
    printf("Enter any number");
    scanf("%d",&num);
    while (num!=0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    printf("%d is the sum of the digits of a number",sum);
}
