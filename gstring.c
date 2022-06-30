#include<stdio.h>
main()
{
    char s[20],rev[20];
    int count=0,i,end;
    printf("Enter the string\n");
    gets(s);
    while(s[count]!='\0')
        count++;
    end=count-1;
    for(i=0;i<count;i++)
    {
        rev[i]=s[end];
        end--;
    }
    rev[i]='\0';
    puts(rev);
}
