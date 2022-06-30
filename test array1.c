#include<stdio.h>
main()
{
    int num,fac=1,i;
    printf("Enter the number:");
    scanf("%d",&num);
    for (i=1;i<=num;i++)
    {
        fac=fac*i;
    }
    printf("%d",fac);

}
