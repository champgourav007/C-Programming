#include<stdio.h>
main()
{
    char name[40];
    int upr=0,lwr=0,i=0;
    printf("Enter Any Sentence");
    gets(name);
    while(name[i]!='\0')
    {
        if (name[i]>=65&&name[i]<=90)
        {
            upr++;
        }
        if (name[i]>=97&&name[i]<=122)
        {
            lwr++;
        }
        i++;
    }
    printf("%d is lowercase and %d is uppercase",lwr,upr);
}
