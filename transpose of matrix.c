#include<stdio.h>
main()
{
    int a[20][20], i,m,n,j;
    printf("Enter the order of the matrix: \n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of the matrix: \n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
       {
           printf("a%d%d: ",i+1,j+1);
         scanf("%d",&a[i][j]);
       }
    }
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of the matrix is: \n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf(" %d ",a[j][i]);
        }
        printf("\n");
    }
}
