#include<stdio.h>
main()
{
    int i,j,count;
    printf("Prime nymber from 1-100:");
    for (i=2;i<=100;i++)
    {
        count=0;
        for (j=2;j<=i/2;j++)
        {
            if (i%j==0)
            {
                count++;
                break;
            }
        }
        if (count==0 && count!=1)
        {
            printf("%d ",i);
        }
    }
}
