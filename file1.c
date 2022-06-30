#include<stdio.h>
main()
//This is the program for leap year
{
    int y;
    printf("Enter any year");
    scanf("%d",&y);
    if (y%4==0||y%400==0)
        printf("%d is a leap year",y);
    else
        printf("%d is not a leap year",y);
}
