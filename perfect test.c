#include<stdio.h>
main()
{
    int num,sum=0,d,i,count=0,temp;
    printf("Enter any number");
    scanf("%d",&num);
    for (i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if (sum==num)
        printf("%d is the perfect number",num);
}
