#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *p;
    int c;
    p=fopen("TXT","w");

    while((scanf("%d",&c))!=(-1)||26)
    {
        putw(c,p);
    }
    fclose(p);
}
