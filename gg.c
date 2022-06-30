#include<stdio.h>
main()
{
    int r,i,first=0,next,second=1;
    printf("Enter the range of a series:");
    scanf("%d",&r);
    printf("%d %d ",first,second);
    for (i=1;i<=r;i++)
    {
        next=first+second;
        first=second;
        second=next;
        printf("%d  ",next);
    }
}
