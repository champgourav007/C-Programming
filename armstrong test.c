#include<stdio.h>
main()
{
    int i,sum=0,temp,num,rem;
    printf("Enter any number");
    scanf("%d",&num);
    temp=num;
    while (temp!=0)
    {
        rem=temp%10;
        sum=sum+rem*rem*rem;
        temp=temp/10;

    }
    if (sum==num)
        printf("%d is the armstrong number",num);
    else
        printf("%d is not a armstrong number",num);

}
