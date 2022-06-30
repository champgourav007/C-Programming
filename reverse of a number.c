#include<stdio.h>
main()
{
    int num,rev=0,rem;
    printf("Enter any number");
    scanf("%d",&num);
    while (num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("%d is the reverse of a number",rev);
}
