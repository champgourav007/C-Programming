#include<stdio.h>
main()
{
    int a[50],range,max,i;
    printf("Enter the range of the array: ");
    scanf("%d",&range);
    printf("Enter the array: ");
    max=0;
    for (i=0;i<range;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<range;i++)
  {
        if (max<a[i])
    {
        max=a[i];
    }
  }
    printf("%d is the maximum number in the array",max);
}
