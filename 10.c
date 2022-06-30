#include<stdio.h>
#include<math.h>
int main()
{
    int temp,count=0,num,last,a,sum,first;
    printf("Enter any number");
    scanf("%d",&num);
    temp=num;
    while (temp!=0)
    {
        temp=temp/10;
        count++;
    }
    first=num%10;
    last=num/pow(10,(count-1));
    sum=first+last;
    printf("%d is the sum of first and last digit",sum);
    if (sum%2==0)
    {
        a=num*2;
        printf("\n%d is the new number",a);
    }
    else
    {
        a=num*5;
        printf("\n%d is the new number",a);
    }
    return 0;
}
