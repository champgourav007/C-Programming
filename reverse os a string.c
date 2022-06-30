#include<stdio.h>
main()
{
    char str[20],rev[20];
    int i=0,count=0,j;
    printf("Enter the string \n");
    gets(str);
    puts(str);
    while(str[i]!='\0')
    {
        count++;
        i++;
    }
    for (j=0;j<=count;j++)
    {
        rev[j]=str[i];
    }
    rev[j]='\0';
    puts(rev);

}
