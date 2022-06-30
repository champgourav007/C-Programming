#include<stdio.h>
main()
{
    int i,j,k;
    for(i=20;i>=1;i--)
    {
        if(i>=18)
        {
            for(j=16;j<=i;j++)
            {
                printf("   *   ");

            }
            printf("\n");
        }
        else
        {
            for(k=1;k<=i;k++)
            {
                printf("   *   ");
            }
            printf("\n");
        }
    }
}
