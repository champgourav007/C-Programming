#include<stdio.h>
main()
{
    int i,sum,j;
    for (i=1;i<=700;i++)
    {
         sum=0;
        for (j=1;j<i;j++)
        {
            if (i%j==0)
            {
                sum=sum+j;
            }

        }
        if (sum==i)
            {
                printf(" %d ",i);
            }

    }

}
