// This program is to find the armstrong number
#include<stdio.h>
#include<math.h>
int main(void)
{
    int num , count = 0, temp , digit , armstrong = 0 ;
    printf("Enter the number: ");
    scanf("%d",&num);
    temp = num;
    while(temp != 0)
    {
        temp = temp /10;
        count += 1;
    }
    temp = num;
    while(temp!=0)
    {
        digit = temp%10;
        armstrong = armstrong + pow(digit,count);
        temp = temp/10;
    }
    if (num == armstrong)
        printf("%d is the armstrong number",num);
    else
    {
        printf("%d is not a armstrong number",num);
    }
    return 0;
}
