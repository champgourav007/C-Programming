#include<stdio.h>
main()
{
    int a[5],i,search;
    printf("enter an array");
    for (i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the integer to search");
    scanf("%d",&search);
    for (i=0;i<5;i++)
    {
        if (search==a[i])
            printf("%d is found in array",search);
        break;
    }

}

