#include<stdio.h>
main()
{
    int a[50],temp,i,s,p,n;
    printf("Enter the range of an array");
    scanf("%d",&n);
    printf("Enter an array");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    temp=0;
    for (p=0;p<(n-1);p++)
    {
        for (s=0;s<n-p-1;s++)
        {
            if(a[s]>a[s+1])
            {
                temp=a[s];
                a[s]=a[s+1];
                a[s+1]=temp;
            }
        }
    }
    printf("Sorted array is: ");
    for (i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }
}
