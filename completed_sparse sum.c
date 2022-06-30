#include<stdio.h>
main()
{
    int i,j,k,m,n,a[100][100],b[100][100],c[100][100],d[100][100],psum[100][100],sum,element,m2,n2;
    printf("Enter the order of the matrix: ");    //Order of Matrix
    scanf("%d%d",&m,&n);
    printf("Enter the elements of the array: ");   //Elements of the matrix
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);              //taking elements of the matrix
        }
    }
    printf("*************************Matrix***********************************\n\n");
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d ",a[i][j]);        //printing elements of the matrix
        }
        printf("\n\n");
    }
    b[0][0]=m;                            // initialization of total rows
    b[0][1]=n;                            // initialization of total columns
    k=1;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           element = a[i][j];
           if (element!=0)
           {
              b[k][0]=i;
              b[k][1]=j;
              b[k][2]=element;                 //sparse matrix
              k++;
           }
        }
    }
    b[0][2]=k-1;                              //Total number of the elements in the sparse matrix
    printf("**************************Sparse Matrix***************************\n\n");
    for(i=1;i<k;i++)
    {
        printf("  %d  %d  %d  \n\n",b[i][0],b[i][1],b[i][2]);       //printing sparse matrix
    }
    printf("Enter order of second matrix: ");              //second matrix
    scanf("%d%d",&m2,&n2);
    printf("Enter the elements of second matrix: ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&c[i][j]);                      //getting elements of the second matrix
        }
    }
    printf("*************************Matrix***********************************\n\n");
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d ",c[i][j]);               //printing the matrix
        }
        printf("\n\n");
    }
    d[0][0]=m2;                           //total number of the rows
    d[0][1]=n2;                           //total number of the columns
    k=1;
    for(i=0;i<m2;i++)
    {
        for(j=0;j<n2;j++)
        {
           element = c[i][j];
           if (element!=0)
           {
              d[k][0]=i;
              d[k][1]=j;
              d[k][2]=element;           //second sparse matrix
              k++;
           }
        }
    }
    d[0][2]=k-1;
    printf("**************************Sparse Matrix***************************\n\n");
    for(i=1;i<k;i++)
    {
        printf("  %d  %d  %d  \n\n",d[i][0],d[i][1],d[i][2]);         //printing second sparse matrix
    }
    // summing up two sparse matrix
    j=0;
    for(i=1;i<=k;i++)
    {

        if (b[i][0]==d[i][0]&&b[i][1]==d[i][1])
        {
            sum = b[i][2] + d[i][2];
            psum[j][0]= b[i][0];
            psum[j][1] = b[i][1];
            psum[j][2] = sum;
            j++;
        }

        else
        {
            psum[j][0] = b[i][0];
            psum[j][1] = b[i][1];
            psum[j][2] = b[i][2];
            psum[j+1][0] = d[i][0];
            psum[j+1][1] = d[i][1];
            psum[j+1][2] = d[i][2];
            j+=2;
        }
    }
    printf("**************************Sum of Sparse Matrix***************************\n\n");
    for(i=0;i<j;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d ",psum[i][j]);           //printing the sum of sparse matrix
        }
        printf("\n\n");
    }

}
