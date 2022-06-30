#include<stdio.h>
main()
{
    int i,a[5];
    printf("Enter the values of an array");

        for (i=0;i<5;i++)
        {
        scanf("%d",&a[i]);
    }
    for (i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
}
