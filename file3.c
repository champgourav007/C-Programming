#include<stdio.h>
main()
{
    int a,b,c,s,d,sub,m;
    printf("Enter any two digits to perform further operation");
    scanf("%d%d",&a,&b);
    printf("Enter 1 for addition 2 for subtraction 3 for multiplication 4 for division ");
    scanf("%d",&c);
    switch (c)
    {
        case 1: s=a+b;
        printf("Sum is %d",s);
        break;
        case 2:sub=a-b;
        printf("Subtraction is %d",sub);
        break;
        case 3: m=a*b;
        printf("Multiplication is %d",m);
        break;
        case 4: d=a/b;
        printf("Division is %d",d);
        break;
        default :printf("wrong input");

    }
}
