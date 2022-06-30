#include<stdio.h>
main()
{
    char name[20],search;
    int i=0,count=0;
    printf("Enter your name");
    gets(name);
    printf("Enter the search character");
    scanf("%c",&search);
    while(name[i]='\0')
    {
        if(name[i]==search)
        {
            count++;
        }
        i++;
    }
    if(count==0)
        printf("Character not found");
    else
        ptintf("%c is found and %d times",search,count);
}
