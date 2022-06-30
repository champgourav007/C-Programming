#include<stdio.h>
main()
{
    int i,a=2,j;
    for(i=6;i>=1;i--)
    {
        a++;
        for(j=1;j<=i;j++)
        {
            printf("%d",a++);
        }
        printf("\n");
    }
}
