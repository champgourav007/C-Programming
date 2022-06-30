#include<stdio.h>
main()
{
    int a[100],n,temp,i,j;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the elements of the array: ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        j=i+1;
        while(j>0&&a[j]<a[j-1])
        {
            temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
            j--;
        }
    }
    printf("Sorted array is :  ");
    for(i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }
}
