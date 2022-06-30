#include<stdio.h>
main()
{
    int num,rev,temp,sum=0,rem,s=0,mul,temp1;
    printf("Enter any number: ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        sum= sum+rem;
        temp=temp/10;
    }
    temp1=sum;
    while(temp1!=0)
    {
        rev=temp1%10;
        s=s*10+rev;
        temp1=temp1/10;
    }
    mul=(s*sum);
    if(mul==num)
    {
        printf("%d is the magic number",num);
    }

}
