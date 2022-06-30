#include<stdio.h>
main()
{
    int i,temp,digit,pallin;
    for(i=1;i<=1000;i++)
    {
        temp = i;
        pallin = 0;

        while(temp!=0)
        {
            digit = temp % 10;
            pallin = pallin*10 + digit;
            temp = temp / 10;
        }
        if(pallin == i)
        {
            printf("%d\n",i);
        }

    }
}
