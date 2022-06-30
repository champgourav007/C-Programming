#include<stdio.h>
main()
{
    int i,p,e,range;
    char a[20],t;
    printf("Enter the range of the array");
    scanf("%d",&range);
    printf("Enter an array");
    for (i=0;i<range;i++)
    {
        scanf("%c",&a[i]);
    }
    for (p=0;p<range-1;p++)
    {
        for (e=0;e=range-p-1;e++)
        {
            if (a[e]>a[e+1])
            {
                t=a[e];
                a[e]=a[e+1];
                a[e+1]=t;
            }
        }
    }
    printf("Sorted character array is:  ");
    for (i=0;i<range;i++)
    {
        printf("%c",a[p]);
    }
}
