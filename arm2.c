// To find the armstrong number from 1 to 100
#include<stdio.h>
#include<math.h>
main()
{
    int num,count,temp,i,digit,arm;
    for (i=10;i<=1000;i++)
    {
        count = 0;
        temp = i;
        arm = 0;
        while(temp!=0)
        {
            temp = temp/10;
            count += 1;
        }
        temp = i;
        while(temp!=0)
        {
            digit = temp%10;
            arm = arm + pow(digit,count);
            temp = temp / 10;
        }
        if(arm == i)
        {
            printf("%d\n",i);
        }

    }
}
