#include<stdio.h>
main()
{
    int i,j,sum=0,a[10][10],m,n;
    printf("Enter the order of the matrix: ");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of the matrix: ");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    if(m==n)
    {
        for(i=0;i<m;i++)
        {
            for (j=0;j<m;j++)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("%d is the sum of trace of matrix %d*%d",sum,m,n);
}
