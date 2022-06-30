#include<stdio.h>
#include<stdio.h>
main()
{
    int num,temp,count=0,second,first,sum;
    printf("Enter any number");
    scanf("%d",&num);
    temp=num;
    while (temp!=0)
    {
        temp=temp/10;
        count++;
    }
    second=num%10;
    first=num/pow(10,(count-1));
    sum=first+second;
    printf("%d is the sum of first and second",sum);

}
