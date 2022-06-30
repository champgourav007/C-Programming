#include<stdio.h>
main()
{
    int a[20],i,n,sec;
    printf("Enter the range of an array");
    scanf("%d",&n);
    printf("Enter the array");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the search element");
    scanf("%d",&sec);
    for (i=0;i<n;i++)
    {
        if (sec==a[i])
        {
            printf("Searched element is found: %d ",a[i]);
            break;
        }
     else
        {
            printf("Searched element is not found");
            break;
        }
    }
}
