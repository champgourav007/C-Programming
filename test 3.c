#include<stdio.h>
main()
{
    int s,f,n,i,e;
    printf("Enter the range of series");
    scanf("%d",&s);
    e=0;
    f=1;
    printf("%d%d",e,f);
    for (i=2;i<=(s-2);i++)
    {
        n=f+e;
        f=n;
        e=f;
        printf("%d ",n);
    }

}
