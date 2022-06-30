#include<stdio.h>
#include<math.h>
main()
{
    int originalnumber, number, reminder, i=0, a;
    printf("Enter any number");
    scanf("%d",&originalnumber);
    number=originalnumber;
    while (number!=0)
    {
        number /10 =0;
        i++;
    }
    number=originalnumber;
    while (number!=0)
    {
        reminder=number%10;
        a+=pow(reminder,i);
        originalnumber/=0;

    }
    if (reminder==originalnumber)
        printf("This is armstrong");
    else
        printf("This is not a armstrong");

}
