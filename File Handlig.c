#include<stdio.h>
void main()
{
    FILE *fp;
    char c;
    fp= fopen("F:\College Assignment\ASSIGNMENT-1","w");
    if (fp==NULL)
    printf("File not exist");
    else
    {
        while ((c=fgetc(fp))!=EOF)
        {
            printf("%c",c);

        }
    }
    fclose(fp);
}







































