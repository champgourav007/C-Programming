#include<stdio.h>
main()
{
    int a;
    float b,c,d;
    printf("Enter Basic Pay Salary of an Employee");
    scanf("%d",&a);
    b=0.1*a+0.05*a;
    c=a+b;
    printf("Gross Salary of an Employee %f",c);
}
