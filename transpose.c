#include<stdio.h>
main()
{
    // DS Assignment Question 4
    int a[100][100],b[100][100],m,n,i,j;

    printf("Enter the order of the matrix:\n");
    scanf("%d%d",&m,&n);

    printf("Enter the elements of the matrix:\n");

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("a[%d][%d]: ",i+1,j+1);              // enter the data into the matrix
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n***************Matrix*********************\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d ",a[i][j]);                     //printing the matrix
        }
        printf("\n");
    }

    printf("\n*****************Transpose********************\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            b[j][i]=a[i][j];                         //condition for the transpose
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d ",b[i][j]);             // printing the transpose
        }
        printf("\n");
    }

}
