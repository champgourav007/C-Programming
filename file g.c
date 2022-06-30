#include<stdio.h>
main()
{
    FILE *fp;
    char c;
    fp=fopen("INPUT","w");
    printf("Enter any data");
    while((c=fgetchar())!= EOF)
    {
        fputc(c,fp);

    }
    fclose(fp);
    printf("\n \n Data output");
    fp=fopen("Input","r");
    while(c=fgetc(fp)!=EOF)
    {
        printf("%c",c);
    }
    fclose(fp);
}
