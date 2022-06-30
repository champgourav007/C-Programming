#include<stdio.h>
main()
{
    char a,b,c;
    printf("Enter any character");
    scanf("%c",&a);
    if (a>=65&&a<=90)
    {
        b=a+32;
        printf("Your Lower Case is %c",b);
    }
    else if(a>=97&&a<=122)
    {
        c=a-32;
        printf("Your Upper case is %c",c);
    }
}
