#include<stdio.h>
main()
{
    int i,j,a=2,c;
    for (i=6;i>=1;i--)
    {
        c=a++;
        for(j=1;j<=i;j++)
        {
            printf("%d",c++);
        }
        printf("\n");

    }
}
