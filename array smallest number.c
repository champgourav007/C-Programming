#include<stdio.h>
main()
{
    int a[5],min,i,position;
    printf("Enter an array: ");
    for (i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for (i=0;i<5;i++)
    {
        if (min>a[i])
        {
            min=a[i];
            position=i;
        }
    }
    printf("%d is the position of smallest number",position);
}
