#include<stdio.h>
main()
{
    int num,rem,max;
    printf("Enter any number");
    scanf("%d",&num);
    max=0;
    while (num!=0)
    {
        rem=num%10;
        if (max<rem)
        {
            max=rem;
        }
        num=num/10;
    }
    printf("%d is the greatest",max);
}
