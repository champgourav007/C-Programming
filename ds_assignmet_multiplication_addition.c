#include<stdio.h>
main()
{
    // DS assignment question 3
    int a[100][100],b[100][100],c[100][100],d[100][100],i,j,k,m,n,p,q,sum,mul,flag=0,flag1=0;
    printf("Enter the order of the matrix A:\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of the matrix A:\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("a[%d%d]: ",i+1,j+1);               //enter the elements of the matrix A
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the order of the matrix B:\n");
    scanf("%d%d",&p,&q);
    printf("Enter the elements of the matrix B:\n");
    for (i=0;i<p;i++)
    {
        for (j=0;j<q;j++)
        {
            printf("a[%d%d]: ",i+1,j+1);                         //enter the elements of the matrix b
            scanf("%d",&b[i][j]);
        }
    }
    if (n==m&&n==q)
    {
        flag1 =1;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                sum =0;
                sum = a[i][j] + b[i][j];                       // sum of matrix A & B
                d[i][j]= sum;
            }
        }

    }
    if (n==p)
    {
        flag=2;
        for (i=0;i<m;i++)
        {
            for (j=0;j<q;j++)
            { mul=0;
                for (k=0;k<n;k++)
                {
                    mul=mul+a[i][k]*b[k][j];                 // multiplication of matrix A & B

                }
                c[i][j]=mul;

            }

        }
    }

    if(flag1==1)
    {
        printf("Sum of two matrix:\n");
        for(i=0;i<m;i++)
        {

            for(j=0;j<q;j++)
            {
                printf(" %d ",d[i][j]);                    //printing sum of the matrix
            }
            printf("\n");
        }
    }
    else
        printf("\nSum is not possible\n");


    if(flag==2)
    {
        printf("Multiplication of the matrix:\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                printf(" %d ",c[i][j]);                  //printing the multiplication of the matrix
            }
            printf("\n");
        }
    }
    else
        printf("Multiplication not possible.");
}
