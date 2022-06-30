#include<stdio.h>
main()
{
    char a[20];
    int i,s,p,temp,n;
    printf("Enter the range: ");
    scanf("%d",&n);
    printf("Enter the character array: ");
    for (i=0;i<n;i++)
    {
        scanf("%c",&a[i]);
    }
    temp=0;
    for (p=0;p<n-1;p++)
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
        printf("%c",&a[i]);
    }
}
