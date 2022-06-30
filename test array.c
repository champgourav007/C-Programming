#include<stdio.h>
main()
{
    int first=0,second=1,next,range,i;
    printf("Enter the range of series");
    scanf("%d",&range);
    printf("%d %d",first,second);
    for (i=1;i<=range;i++)
    {
        next=first+second;
        first=second;
        second=next;
        printf("%d",next);
    }
}
