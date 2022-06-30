#include<stdio.h>
main()
{
    int a[5],i,j,search;
    printf("Enter an array");
    for (i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    printf("Enter the element for search");
    scanf("%d",&search);
    for (i=0;i<5;i++)
    {
        if (search==a[i])
        {
            printf("The element is found %d",search);
            break;
        }
        else
            printf("Element not found");
        break;
    }

}
