#include<stdio.h>
main()
{
    int min,i,j,a[5];
    printf("Enter an array \n");
    for (i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    min=0;
    for (i=0;i<5;i++)
    {
        if (min<a[i])
        {
            a[i]=min;
        }
    }
    printf("%d",a[i]);
}
