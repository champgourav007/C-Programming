#include<stdio.h>
main()
{
    int a[10][10], b[10][10], c[10][10],i,j,k,m,n,p,q,sum;
    printf("Enter order of the matrix A");
    scanf("%d%d",&m,&n);
    printf("Enter order of the matrix B");
    scanf("%d%d",&p,&q);

    if (n==p)
    {
        printf("Enter elements of A: ");

    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("\n a(%d%d): ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter elements of B: ");

    for (i=0;i<p;i++)
    {
        for (j=0;j<q;j++)
        {
            printf("\n b(%d%d): ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    for (i=0;i<m;i++)
    {
        for (j=0;j<q;j++)
        {
            sum=0;
            for (k=0;k<p;k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }
                    c[i][j]=sum;
                    printf(" %d ",c[i][j]);
        }
    printf("\n");
}
}
}


