#include<stdio.h>
main()
{
    int i,j,sum;
    for (i=1;i<11;i++)
    {
        sum=0;
        for (j=1;j<=10;j++)
        {
            sum=sum+i;

            printf(" %d ",sum);
        }
        printf("\n");
    }

}
